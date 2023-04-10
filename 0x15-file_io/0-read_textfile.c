#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - read text file print to STDOUT
 * @filename: name
 * @letters: letters
 * Return: the actual number of letters it could read and print,
 * if the file can not be opened or read, return 0,
 * if filename is NULL return 0
 * if write fails or does not write the
 * expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t a, b, c;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	c = read(a, buffer, letters);
	b = write(STDOUT_FILENO, buffer, c);

	if (a == -1)
		return (0);

	free(buffer);
	close(a);
	return (b);
}
