#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 1024
/**
 * copy - function that copies a file
 * @filename1: first file name
 * @filename2: second filename
 *
 */
void copy(char *filename1, char *filename2)
{
	int fd_cpyfrom, fd_cpyto, read_bytes, written;
	char buffer[BUFSIZE];

	fd_cpyfrom = open(filename1, O_RDONLY);
	if (fd_cpyfrom == EOF)
	{
		dprintf(2, "Can't read from file %s\n", filename1);
		exit(98);
	}
	fd_cpyto = open(filename2, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_cpyto == EOF)
	{
		dprintf(2, "Can't write to file %s\n", filename2);
		exit(99);
	}
	while ((read_bytes = read(fd_cpyfrom, buffer, BUFSIZE)) > 0)
	{
		written = write(fd_cpyto, buffer, read_bytes);
		if (written != read_bytes)
		{
			dprintf(2, "Can't write to file %s\n", filename2);
			exit(99);
		}
	}
	if (read_bytes == EOF)
	{
		dprintf(2, "Can't read from file %s\n", filename1);
		exit(98);
	}
	if ((close(fd_cpyfrom)) == -1)
	{
		dprintf(2, "Error can't close fd %d\n", fd_cpyfrom);
		exit(100);
	}
	if ((close(fd_cpyto)) == -1)
	{
		dprintf(2, "Error can't close fd %d\n", fd_cpyto);
		exit(100);
	}
}
/**
 * main - main function
 * @argc: argument count
 * @argv: arguments
 * Return: returns 1 0n success
 *
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
	}
	copy(argv[1], argv[2]);
	return (0);
}
