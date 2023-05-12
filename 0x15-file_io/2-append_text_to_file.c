#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - function that appends text to a file
 * @filename: the file to be appended
 * @text_content: the text to be added to the file
 * Return: returns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	int slen = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[slen] != '\0')
		slen++;
	if (fd == EOF)
	{
		close(fd);
		return (-1);
	}
	bytes_written = write(fd, text_content, slen);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
