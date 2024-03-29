#include "lists.h"
#include <unistd.h>

/**
 * listint_len - returns the number the number of elements
 * in a linked list
 * @h: linked list to transverse
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		nm++;
		h = h->next;
	}
	return (nm);
}
