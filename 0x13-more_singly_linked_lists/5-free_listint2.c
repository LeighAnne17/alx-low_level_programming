#include "lists.h"
#include <unistd.h>

/**
 * free_listint2 - free linked list
 * @head: pointer to list
 */

void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
		return;

	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}
	*head = NULL;
}
