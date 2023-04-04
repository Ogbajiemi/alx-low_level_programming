#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a new node at given position
 * @head: first node pointer
 * @idx: index where the new node is added
 * @n: data to be inserted
 *
 * Return: pointer to the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *my_node = NULL;
	listint_t *current = *head;
	unsigned int k = 0;

	while (current != NULL && k < idx - 1)
	{
		current = current->next;
		k++;
	}
	if (k != idx - 1)
	{
		return (NULL);
	}
	my_node = malloc(sizeof(listint_t));
	if (my_node == NULL)
	{
		return (NULL);
	}
	my_node->n = n;

	if (idx == 0)
	{
		my_node->next = *head;
		*head = my_node;
	}

	else
	{
		my_node->next = current->next;
		current->next = my_node;
	}

	return (my_node);
}
