#include "lists.h"

/**
 * get_dnodeint_at_index - This will returns nth node of dl_t linked list.
 * @head: pointer to the list.
 * @index: nth node.
 * Return: nth node, if the node doesn't exist, returns NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *n = head;
	unsigned int c = 0;

	while (n && c != index)
	{
		c++;
		n = n->next;
	}
	if (n && c == index)
		return (n);
	return (NULL);
}
