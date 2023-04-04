#include "lists.h"
#include <unistd.h>

/**
 * pop_listint - eletes the head node of linked list
 * @head: pointer to first element
 * Return: 0 if linked list is empty,
 * or the deleted data
 */

int pop_listint(listint_t **head)
{
	listint_t  *temporary;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (i);
}
