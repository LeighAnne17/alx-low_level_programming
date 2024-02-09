#include "main.h"

/**
 * get_endianness - checks machines
 * Return: 0 if big, 1 i small
 */
int get_endianness(void);
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
