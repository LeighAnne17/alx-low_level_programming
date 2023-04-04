#include "lists.h"
#include <unistd.h>

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: first node
 * @index: index of node to be returned
 * Retun: node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temporary = head;

	while (temporary && i < index)
	{
		temporary = temporary->next;
			i++;
	}

	return (temporary ? temporary : NULL);
}
