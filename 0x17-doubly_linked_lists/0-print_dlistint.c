#include "lists.h"

/**
 * print_dlistint - To prints elements of  dlistint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *n = h;
	size_t cont = 0;

	while (n)
	{
		printf("%i\n", n->n);
		cont++;
		n = n->next;
	}

	return (cont);
}
