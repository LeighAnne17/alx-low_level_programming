#include "main.h"

/**
 * _strlen_recursion - returns the lngth of a string
 * @s: the string whose length will be returned
 * Return: integer value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
