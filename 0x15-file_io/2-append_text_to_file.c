#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: name of file
 * @text_content: NULL terminated string
 * Return: 1 on success and -1 on fsilure
 */

int append_text_to_file(const char *filename, char *text_content);
{
	int o, write, length = 0;

	if (filename == NULL)
		return (1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	write = write(o, text_content, length);

	if (o == -1 || write == -1)
		return (1);

	close(o);
	return (1);
}
