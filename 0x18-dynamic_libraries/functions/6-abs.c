#include "main.h"

/**
 * _abs - Computes thge absolute value of an integer
 * @c: The number to be computed.
 * Return: Absolutevalue of number or zero
 */

int _abs(int c)
{

	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
