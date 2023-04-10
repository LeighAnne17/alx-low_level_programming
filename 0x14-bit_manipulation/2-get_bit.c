#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - returns value of bit ata given index
 * @n: int
 * @index: index
 * Return: value of the but at index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x = 0;

	if (index > 63)
		return (-1);

	if (n == 0 && index < 64)
		return (0);

	for (; x <= 63; n >>= 1, x++)
	{
		if (index == x)
			return (n & x);
	}

	return (-1);
}
