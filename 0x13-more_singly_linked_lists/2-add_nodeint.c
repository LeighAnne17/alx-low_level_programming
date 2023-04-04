#include "lists.h"
#include <unistd.h>

/**
 * add_nodeint - adds new node at the beginning of linked list
 * @head: pointer to first node
 * @n: data
 * Return: address of new element
 * or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
