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
	char buffer[1024];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	rd = read(fd, buffer, letters);
	if (rd < 0)
		return (0);
	written = write(1, buffer, rd);
	if (written < 0 || written != letters)
		return 0;
	if (close(fd) < 0)
		return (0);
	return (rd);
}
