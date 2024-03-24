#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_distinct -  prints all the elements of a list
 * @h: head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
