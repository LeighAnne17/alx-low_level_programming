#include "main.h"
#include <unistd.h>

/**
 * _puchar = writes c to stdout
 * @c: character to be written
 * Return: 1 on success, -1 on failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
