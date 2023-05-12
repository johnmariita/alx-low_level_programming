#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_file_opener - function to open a file
 * @filename: file to be opened
 * Return: returns the file descriptor
 */
ssize_t read_file_opener(char *filename)
{
	ssize_t fd_open = open(filename, O_RDONLY);

	if (fd_open == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd_open);
}
/**
 * write_file_opener - function that writes to a file
 * @filename: the filename to be written to
 * Return: returns the file descriptor
 */
ssize_t write_file_opener(char *filename)
{
	ssize_t fd_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_open == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd_open);
}
/**
 * main - the main function
 * @argc: the argument count
 * @argv: the argument vector
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	ssize_t from, to, bytes_read;
	ssize_t bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = read_file_opener(argv[1]);
	to = write_file_opener(argv[2]);
	while (bytes_read > 0)
	{
		bytes_read = read(from, buffer, 1024);
		bytes_written = write(to, buffer, bytes_read);
	}
	if (close(from) == -1)
	{
		dprintf(2, "Error: Can't close fd %li\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(2, "Error: Can't close fd %li\n", to);
		exit(100);
	}
	return (bytes_written);
}
