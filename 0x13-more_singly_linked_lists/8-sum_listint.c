#include "lists.h"

/**
 * sum_listint - return the sum of all the data in the list
 * @head: the first node in the list
 *
 * Return: sum of result
 */

int sum_listint(listint_t *head)
{
	int mySum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		mySum += current->n;
		current = current->next;
	}

	return (mySum);
}
