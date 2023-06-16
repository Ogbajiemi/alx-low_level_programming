#include "lists.h"

/**
 * add_dnodeint - To include a new node at the start of dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *fresh;

	fresh = malloc(sizeof(dlistint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->prev = NULL;
	fresh->next = *head;
	if (*head)
		(*head)->prev = fresh;
	*head = fresh;

	return (fresh);
}
