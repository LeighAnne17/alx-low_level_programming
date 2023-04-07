#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string of chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int x = 0;

	if (b == NULL)
		return (0);

	while (b[i] == 0 || b[i] = 0)
	{
		x << 1;
		x += b[i] - '0';
		i++;
	}
	return (x);
}
