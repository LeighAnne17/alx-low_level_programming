#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns sum of a and b
 * @a: a
 * @b: b
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference
 * @a: a
 * @b: b
 * Returns: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  returns product
 * @a: a
 * @b: b
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns quotient
 * @a: a
 * @b: b
 * Return: quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns remainder of division
 * @a: a
 * @b: b
 * Return: remainder of division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
