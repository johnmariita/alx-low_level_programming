#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - function that reads and writes textfile to thestdout stream
 * @filename: pathway of the file being read
 * @letters: number of bytes to be read
 * Return: returns chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int written, read_bytes, printed_chars;
	int fd = open(filename, O_RDONLY);
	char *my_buffer;

	if (filename == NULL)
		return (0);
	if (fd == EOF)
		return (0);
	my_buffer = malloc(sizeof(char) * (letters + 1));
	if (my_buffer == NULL)
		return (0);
	read_bytes = read(fd, my_buffer, letters);
	if (read_bytes == EOF)
	{
		free(my_buffer);
		close(fd);
		return (0);
	}
	my_buffer[read_bytes] = '\0';
	written = write(1, my_buffer, letters);
	printed_chars = written;
	if (written == EOF)
	{
		free(my_buffer);
		close(fd);
		return (0);
	}
	free(my_buffer);
	close(fd);
	return (printed_chars);
}
