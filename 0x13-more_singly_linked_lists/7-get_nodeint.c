#include "lists.h"

/**
 * get_nodeint_at_index - return the node at a certain index in a linked list
 * @head: first node
 * @index: index of the node to be returned
 *
 * Return: pointer to the node we are searching for
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (k == index)
		{
			return (current);
		}
		k++;
		current = current->next;
	}

	return (NULL);
}
