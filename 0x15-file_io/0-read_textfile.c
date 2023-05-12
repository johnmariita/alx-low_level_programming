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
	ssize_t bytes_read, bytes_written;
	char *buffer = malloc(letters);
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
		return (0);
	if (letters < 1024 || letters > 2000)
		bytes_written = write(1, buffer, bytes_read);
	else
		bytes_written = write(2, buffer, bytes_read);
	free(buffer);
	close(fd);
	return (bytes_written);

}
