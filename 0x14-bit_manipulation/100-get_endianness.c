#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - checks for endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c;

	c = (char *) &x;
	return (*c);
}