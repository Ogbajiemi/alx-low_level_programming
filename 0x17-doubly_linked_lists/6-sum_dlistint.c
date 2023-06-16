#include "lists.h"

/**
 * sum_dlistint - To returns the sum up of data (n) of a dlistint_t list.
 * @head: pointer to the list.
 * Return: sum of all data in the list, 0 if the lost is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *q = head;
	int sum = 0;

	while (q)
	{
		sum += q->n;
		q = q->next;
	}

	return (sum);
}
