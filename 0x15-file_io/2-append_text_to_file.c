#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * append_text_to_file - function that appends text to file
 * @filename: name or filepath of the file
 * @text_content: the string to be appended
 * Return: returns 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	unsigned int t_len = 0;
	FILE *hfile = fopen(filename, "a");
	char *p;

	if (hfile == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (p = text_content; *p; p++)
		t_len++;
	fwrite(text_content, 1, t_len, hfile);
	fclose(hfile);
	return (1);
}
