#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: text to be written on the file
 * Return: returns 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int slen = 0;
	ssize_t bytes_written;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == EOF)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[slen] != '\0')
	{
		slen++;
	}
	bytes_written = write(fd, text_content, slen);
	if (bytes_written == EOF)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);


}
