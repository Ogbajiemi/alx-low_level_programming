#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *current_node = *head;

	while (current_node != NULL)
	{
		*head = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = *head;
	}

	*head = prev_node;
	return (*head);
}

