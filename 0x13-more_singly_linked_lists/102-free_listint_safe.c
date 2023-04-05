#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts the number of unique codes
 * in looped linked list
 * @head: poniter to head of linked list
 * Return: number of unique codes
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *frog, *chameleon;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	frog = head->next;
	chameleon = (head->next)->next;

	while (chameleon)
	{
		if (frog == chameleon)
		{
			frog = head;

			while (frog != chameleon)
			{
				nodes++;
				frog = frog->next;
				chameleon = chameleon->next;
			}

			frog = frog->next;
			while (frog != chameleon)
			{
				nodes++;
				frog = frog->next;
			}

			return (nodes);
		}

		frog = frog->next;
		chameleon = (chameleon->next)->next;
	}

	return (0);
}


/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodes, index;
	listint_t *temporary;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temporary = (*h)->next;
			free(*h);
			*h = temporary;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			temporary = *h->next;
			free(*h);
			*h = temporary;
		}
		*h = NULL;
	}
	h = NULL;

	return (nodes);
}
