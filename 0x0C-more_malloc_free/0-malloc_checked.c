#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *v;

	v = malloc(b);
	if (v == NULL)
	{
		exit(98);
	}
	return (v);
}
