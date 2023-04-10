#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: int
 * @index: index
 * Return: 1 if it worked,
 * or -1 if an occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1 << index;

	if (index > 63)
		return (-1);
	
	if ( *n & x)
		*n ^= x;
	
	return (1);
}
