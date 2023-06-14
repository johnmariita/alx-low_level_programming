#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_mem - allocates a block of memory
 * @str: the string to get the size
 * Return: returns the memory address of the block
 */
char **alloc_mem(char *str)
{
	char **memory;
	int word_count = 0, i = 0, j = 0;

	while (str[i])
		if (str[i++] != ' ' && str[i + 1] == ' ')
			word_count++;
	memory = (char **)malloc(sizeof(char *) * word_count + 1);
	if (memory == NULL)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		memory[i] = (char *)malloc(1024);
		if (memory[i] == NULL)
		{
			for (; j < i; j++)
				free(memory[j]);
			free(memory);
			return (NULL);
		}
		i++;
	}
	return (memory);
}
/**
 * strtow - function to convert a string to words
 * @str: the string
 * Return: returns words
 */
char **strtow(char *str)
{
	char **words;
	int r = 0, i = 0, j = 0;

	words = alloc_mem(str);
	i = 0, j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			while (str[i])
			{
				if (str[i] == ' ')
				{
					words[r++][j] = '\0';
					j = 0;
					break;
				}
				if (str[i + 1] == '\0')
				{
					words[r][j] = '\0';
					break;
				}
				words[r][j++] = str[i++];
			}
		}
		i++;
	}
	words[r] = NULL;
	return (words);
}
