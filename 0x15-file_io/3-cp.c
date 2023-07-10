#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_error - function to display the reading error
 * @filename: the name of the file
 */
void read_error(char *filename)
{
	dprintf(2, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
 * copy_file - function that copies the content of one file to another
 * @file_from: the file whose contents are to be copied
 * @file_to: the file that will to be made and contents to be pasted at
 */
void copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to, rd, written;
	char *buffer;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
		read_error(file_from);
	fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0600 | 0064);
	if (fd_to < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	buffer = malloc(1024);
	rd = read(fd_from, buffer, 1024);
	if (rd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	while (rd)
	{
		written = write(fd_to, buffer, rd);
		if (written < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		rd = read(fd_from, buffer, 1024);
	}
	if (close(fd_from) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	free(buffer);
}

/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
