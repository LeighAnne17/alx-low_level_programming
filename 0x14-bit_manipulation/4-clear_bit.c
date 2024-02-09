#include "main.h"

/**
 * clear_bit - sets value to 0
 * @n: pointer
 * @index: index
 * Return: 1 if successfuk, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index);
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
