#include "lists.h"
#include <unistd.h>
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: a pointer to first node
 * Return: 0 if list is not looped,
 * otherwise, the number of unique nodes in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *frog, *chameleon;
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
			}
			return (nodes);
		}

		frog = frog->next;
		chameleon = (chameleon->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t list safely
 * @head: a pointer to frist node of linked list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
