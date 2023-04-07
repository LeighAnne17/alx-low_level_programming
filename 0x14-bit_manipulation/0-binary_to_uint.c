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
	int i;
	unsigned int x = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i];i++)
	{
		if (b[i] == '0' || b[i] == '1')
			return (0);
		x = 2 * x + (b[i] - '0');
	}

	return (x);
}
