#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: int
 * @index: index
 * Return: 1 it it worked
 * or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1 << index;

	if (index > 63)
	return (-1);

	*n = (*n | x);
	return (1);
}
