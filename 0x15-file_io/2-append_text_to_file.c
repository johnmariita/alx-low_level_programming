#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text to file
 * @filename: pathname to the file
 * @text_content: the text to be appended
 * Return: returns 1 on success, -1 upon failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY, 0040 | 0020 | 0004);
	if (fd < 0)
		return (-1);
	written = write(fd, text_content, strlen(text_content));
	if (written < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
