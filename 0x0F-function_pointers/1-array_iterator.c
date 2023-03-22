#include "function_pointers.h"

/**
 * array_iterator - executes function given as a parameter oneach element of array
 * @array: array
 * @size: size of array
 * @action: pointer to the function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j = 0;
	if (array != NULL && action != NULL && size > 0)
	{
		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}
