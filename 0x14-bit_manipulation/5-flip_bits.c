#include "main.h"

/**
 * flib_bits - counts number of bits to be flipped
 * @n: firt number0
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m);
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; 1 >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
