#include "main.h"

/**
 * print_binary - prints binary
 * @n: numbers to print
 */

void print_binary(unsigned long int n);
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; 1 >= 0; i--)
	{
		current = n  >> 1;
		if (current & i)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
