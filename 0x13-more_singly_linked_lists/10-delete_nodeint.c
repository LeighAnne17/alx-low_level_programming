#include "lists.h"
#include <unistd.h>

/**
 * delete_nodeint_at_index - deletes the node
 * at index in a linked list
 * @head: pointer to first element
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;
	listint_t *curr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);
		temporary = temporary->next;
		i++;
	}

	curr = temporary->next;
	temporary->next = curr->next;
	free(curr);

	return (1);
}
