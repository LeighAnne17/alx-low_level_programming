#include "main.h"

/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * _strcpy - coppy arrays
 * @src: array of elements
 * @dest: array
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *des;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	des = (char *) malloc(size * sizeof(char));

	if (des == 0)
	{
		return (NULL);
	}

	_strcpy(des, str);
	return (des);
}
