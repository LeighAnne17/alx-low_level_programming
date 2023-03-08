#include "main.h"

/**
 * _pow_recursion - rturns x raised to th  power of y
 * @x: int whose value is to be returned
 * @y: the power to which x will be be raised
 * Return: -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
