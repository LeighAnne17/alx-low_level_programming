#include "lists.h"
#include <unistd.h>

/**
 * insert_nodeint_at_index - inserts new node
 * in a linked list at a given position
 * @head: pointer to first node
 * @idx: index where the new node will be added
 * @n: data to be inserted
 * Return: the address of the new node,
 * or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *temporary = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; temporary && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = temporary->next;
			temporary->next = newnode;
			return (newnode);
		}
		else
			temporary = temporary->next;
	}
	return (NULL);
}
