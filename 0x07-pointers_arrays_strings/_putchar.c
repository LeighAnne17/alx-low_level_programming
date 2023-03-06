#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: Character to print
 * Return: 1 on success , -1 on error else error
 */

int _puthar(char c)
{
	return (write(1, &c, 1));
}
