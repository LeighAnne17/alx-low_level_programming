#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all elements of listint_t list
 * @h: linked lists
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nm++;
		h = h->next;
	}
	return (nm);
}
