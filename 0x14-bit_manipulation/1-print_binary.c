#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - prints a binary representation of a number
 * @n: integer
 * Return: binary format
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			_putchar((n & 1) + '0');
	}
	else
		_putchar('0');
}
