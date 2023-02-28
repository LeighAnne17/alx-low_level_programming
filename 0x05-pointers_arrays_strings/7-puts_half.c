#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of the string
 * if the number is odd it should print the last n characters
 * of the string where n = (length_of_the_string - 1) / 2
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k += 1;
	}
	else
	{
		k = j / 2;
	}
	for (; k < j; k++)
	{
		putchar(str[k]);
	}
	putchar('\n');
}
