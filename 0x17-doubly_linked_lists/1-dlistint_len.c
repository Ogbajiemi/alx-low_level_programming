#include "lists.h"

/**
 * dlistint_len - To display the of elements in a linked dlistint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *n = h;
	size_t cont = 0;

	while (n)
	{
		cont++;
		n = n->next;
	}

	return (cont);
}
