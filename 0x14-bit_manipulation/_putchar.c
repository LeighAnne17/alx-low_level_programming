#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: character to be printed
 * Return: 1 on success
 * On error, -1 and errno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
