#include "main.h"

/**
 * print_binary - prints binary of a decimal
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << (sizeof(unsigned long int) * 8 - 1);

	for (int x = 0; x < sizeof(unsigned long int) * 8; x++)
	{
		if (n & m)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}

		m >>=1;
	}
	putchar('\n');
}

