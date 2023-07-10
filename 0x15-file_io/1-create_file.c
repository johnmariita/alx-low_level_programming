#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: the content to be written in the file
 * Return: returns 1 on success and -1 upon failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd_open, written;

	if (filename == NULL)
		return (-1);
	fd_open = open(filename, O_RDWR | O_TRUNC | O_CREAT | O_EXCL, 0400 | 0200);
	if (text_content == NULL)
	{
		close(fd_open);
		return (1);
	}
	if (fd_open < 0)
	{
		close(fd_open);
		return (-1);
	}
	written = write(fd_open, text_content, strlen(text_content));
	if (written < 0)
	{
		close(fd_open);
		return (-1);
	}
	close(fd_open);
	return (1);
}
