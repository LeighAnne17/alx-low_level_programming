#include "main.h"

/**
 * set_bit - sets a bit
 * @n: number
 * @index: index og bit
 * Return: 1 if successful, -1 if it failed
 */
int set_bit(unsigned long int *n, unsigned int index);
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
