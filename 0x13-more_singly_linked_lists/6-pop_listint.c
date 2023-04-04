#include "lists.h"

/**
 * pop_listint - deleting the head node of a list
 * @head: pointer to the initial element in the linked list
 *
 * Return: the information inside the element that was deleted
 * or 0 if the list is empty
 *
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
