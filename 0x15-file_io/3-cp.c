#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFSIZE 1024
/**
 * copy - a function that copies a file content to another file
 * @file_from: file being copied
 * @file_to: file_being copied to
 */
void copy(char *file_from, char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buf[BUFFSIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from != -1)
		bytes_read = read(fd_from, buf, BUFFSIZE);
	else
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "ERROR: Can't write to %s\n", file_to);
		exit(99);
	}
	bytes_written = write(fd_to, buf, bytes_read);
	if (bytes_written == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: can't close fd %d\n", fd_to);
		exit(100);
	}
}
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 on success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	copy(argv[1], argv[2]);
	return (100);
}
