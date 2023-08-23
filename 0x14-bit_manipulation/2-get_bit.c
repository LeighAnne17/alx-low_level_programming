#include "main.h"
#include <stdio.h>

/**
 * get_bit - return the value of a bit at an index
 * @n: number to search for
 * @index: index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (1);
	value = (n >> index) & 1;
	return (value);
}
