#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the natural square root for
 * Return: -1 if the number does not have natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - recurses to find actual square root of a number
 * @num: number to calculate the square root of
 * @root: iterator
 * Return: resulting square root
 */

int find_sqrt(int num, int root)
{
	if (root * root > num)
		return (-1);
	if (root * root == num)
		return (root);
	return (find_sqrt(num, root + 1));
}
