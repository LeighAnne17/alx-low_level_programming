#include "lists.h"
#include <unistd.h>

/**
 * add_nodeint_end - adds node at the end of linked list
 * @head: pointer to the first element
 * @n: data
 * Return: address of new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temporary = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temporary->next)
		temporary = temporary->next;

	temporary->next = newnode;

	return (newnode);
}
