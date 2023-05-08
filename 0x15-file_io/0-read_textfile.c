#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file to the stdout
 * @filename: the file being read from
 * @letters: the letters to be read
 * Return: returns the no. of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(letters + 1);
	ssize_t bytes_read;
	ssize_t bytes_written;
	int fd;

	if (filename == NULL)
	{
		free(buf);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == EOF)
	{
		free(buf);
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buf, letters);
	buf[letters + 1] = '\0';
	if (bytes_read < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	bytes_written = write(1, buf, letters);
	if (bytes_written < 0 || bytes_written < bytes_read)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (bytes_read);
}
