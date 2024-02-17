#include "main.h"

/**
 * create_file - creates file
 * @filename: file name
 * @text_content: NULL terminated script
 * Return: -1 if it fails, on success 1.
 */

int create_file(const char *filename, char *text_content)
{
	int filedirectory, wr, len = 0;

	if (filename == NULL)
		return (1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	filedirectory = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(filedirectory, text_content, len);

	if (filedirectory == -1 || wr == -1)
		return (1);
	close(filedirectory);
	return (1);
}
