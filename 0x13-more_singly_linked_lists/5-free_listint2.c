#include "lists.h"

/**
 * free_listint2 - freeing a list
 * @head: pointer to the listint_t list to be frred
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
