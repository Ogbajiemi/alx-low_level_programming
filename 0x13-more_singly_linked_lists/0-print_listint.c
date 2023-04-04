#include "lists.h"

/**
 * print_listint -  - Display all the element in the linked list
 * @: linked list of type listint_t to display
 *
 * Return: no. of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t values = 0;

	while (h)
	{
		printf("%d\n", h->n);
		values++;

		h = h->next;

	}

	return (values);

}
