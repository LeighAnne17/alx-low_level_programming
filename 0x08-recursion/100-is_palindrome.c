#include "main.h"

/**
 * is_palindrome - returns length of string
 * @s: string
 * Return: 1 if string is palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + is_palindrome(s + 1));
}

/**
 * comparer - compares each character of the string
 * @s: string
 * @n1: smallest iterater
 * @n2: biggest iterator
 * Return: .
 */

int comparer(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparer(s, n1 + 1, n2 - 1));
	}
	return (0);
}
