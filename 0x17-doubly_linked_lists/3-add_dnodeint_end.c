#include "lists.h"

/**
 * add_dnodeint_end - include new node at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *fresh, *a = *head;

	fresh = malloc(sizeof(dlistint_t));
	if (fresh == NULL)
		return (NULL);
	fresh->n = n;
	fresh->next = NULL;

	if (a)
	{
		while (a->next)
			a = a->next;
		fresh->prev = a;
		a->next = fresh;
	}
	else
	{
		*head = fresh;
		fresh->prev = NULL;
	}

	return (fresh);
}
