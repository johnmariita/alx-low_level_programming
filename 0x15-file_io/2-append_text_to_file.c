#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, t_len;
	char *p;

	fd = open(filename, O_WRONLY | O_APPEND, S_IRGRP | S_IWGRP | S_IROTH);
	if (fd == EOF || filename == NULL)
	{
		close (fd);
		return (-1);
	}
	if (text_content == NULL)
	{
		close (fd);
		return (1);
	}
	while (*text_content)
	{
		for (p = text_content; *p; p++)
			t_len++;
	}
	write(fd, text_content, t_len);
	close (fd);
	return (1);
}
