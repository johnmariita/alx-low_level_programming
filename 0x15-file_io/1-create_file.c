#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the name or path of the file
 * @text_content: the content to be written to the file
 * Return: returns 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t t_len = 0, written;
	char *p;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (p = text_content; *p; p++)
			t_len++;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (t_len > 0)
	{
		written = write(fd, text_content, t_len);
		if (written != t_len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
