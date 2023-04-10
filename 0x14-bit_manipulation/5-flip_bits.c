#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits you wpuld need
 * to flip to get from one number to another
 * @n: int
 * @m: int
 * Return: nothing
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int i = 63;
	int y = 0;
	unsigned long int z;

	for (; i >= 0; i--)
	{
		z = x >> i;
		if (z & 1)
			y++;
	}
	return (y);
}

