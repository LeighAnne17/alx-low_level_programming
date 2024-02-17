#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int filedirection);
/**
 * create_buffer - allocates 1024 bytes
 * @file: file name
 * Return: a pointer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit (99);
	}

	return (buffer);
}


/**
 * close_file - closes file
 * @fd: file descriptor
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if ( c == -1)
	{
		dprint(STDERR_FILENO, "Erroe: Can't close fd %d\n", fd);
		exit (100);
	}
}

/**
 * main- copies file contnt to another file
 * @argc: argument number
 * @argv: array of pointers
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_fom file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | 0_WRONLY | _TRUNC, 0664);

	do {

		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from filr %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to,buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf (STERR_FILENO, "Erroe:Can't wite to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r= read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY |O_APPEND);

	}

	while (r > 0 );

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
