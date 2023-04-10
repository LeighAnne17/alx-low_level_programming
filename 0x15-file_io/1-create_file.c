#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: name
 * @text_content: pointer
 * Return: --1 if function fails otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, c = 0;

	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}

	b = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(b, text_content, c);
	if (b == -1 || a == -1)
		return (-1);
	close(b);
	return (1);
}

