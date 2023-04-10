#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of file
 * @text_content: string
 * Return: 2-append_text_to_file.c
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, c = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}

	b = open(filename, O_WRONLY | O_APPEND);
	a = write(b, text_content, c);

	if (b == -1 || a == -1)
		return (-1);

	close(b);
	return (1);
}
