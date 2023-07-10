#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - function that reads a file
 * @filename: the path to the file
 * @letters: count of letters
 * Return: returns the number of letters read or 0 upon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, written;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	rd = read(fd, buffer, letters);
	if (rd < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	written = write(1, buffer, rd);
	if (written != rd)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	if (close(fd) < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	return (written);
}
