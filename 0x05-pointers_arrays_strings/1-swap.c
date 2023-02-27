#include <stdio.h>

/**
 * swap_int - Swaps the avlues of two integers
 * @a: the first integerto be swapped
 * @b: The second integer to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tempo = *a;
	*a = *b;
	*b = tempo;

}
