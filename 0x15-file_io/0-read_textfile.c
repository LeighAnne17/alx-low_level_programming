#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads the text file to STDOUT
 * @filename: file name
 * @letters: number of letters in file
 * Return: w- number of bytes, 0  if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	if (filename == NULL)
		return (0);

	char *buffer;
	ssize_t filedirection;
	ssize_t write;
	ssize_t type;

	filedirection = open(filename, O_RDONLY);
	if (filedirection == -1)
		return (0);

	buffer = malloc(sizeof(char) * letter);
	type = read(filedirection, buffer, letters);
	write = wtite(STDOUT_FILENO, buffer, type);

	free(buffer);
	close(filedirection);
	return (0);
}

