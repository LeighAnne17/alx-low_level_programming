#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: the number whose factorial to calculate
 * Return: -1 to indicate error if n is less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
