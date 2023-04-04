#include "lists.h"
#include <unistd.h>

/**
 * sum_listint - calculates the sum of all the data
 * in the linked list
 * @head: firstnode in linked list
 * Return: sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temporary = head;

	while (temporary)
	{
		sum += temporary->n;
		temporary = temporary->next;
	}
	return (sum);
}
