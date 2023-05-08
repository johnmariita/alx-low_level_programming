#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
 */
int main(int argc, char **argv)
{
	int fd_from;
	int fd_to;
	ssize_t bytes_read, bytes_written;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	bytes_read = read(fd_from, buf, 1024);
	if (bytes_read == -1 || fd_from == -1)
	{
		close(fd_from);
		close(fd_to);
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	bytes_written = write(fd_to, buf, 1024);
	if (fd_to == -1 || bytes_written == -1)
	{
		close(fd_from);
		close(fd_to);
		printf("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if ((close(fd_from)) == -1)
	{
		printf("Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if ((close(fd_to)) == -1)
	{
		printf("Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
