#include "main.h"

/**
 * main - main block
 * _islower - Checks for lowercase character
 * @c: the character to be checked for
 * Return: 1 for lowercase or 0v for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
