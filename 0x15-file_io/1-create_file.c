#include "main.h"

/**
 * create_file - creates file
 * @filename: file name
 * @text_content: NULL terminated script
 * Return: -1 if it fails, on success 1.
 */

int create_file(const char *filename, char *text_content);
{
	int filedirectory, write, length = 0;

	if (filename == NULL)
		return (1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];
			length++;
	}

	filedirection = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write = write(filedirection, text_content, length);

	if (filedirection == -1 || write == -1)
		return (1);
	close(filedirection);
	return (1);
}
