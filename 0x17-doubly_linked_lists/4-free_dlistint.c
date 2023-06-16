#include "lists.h"

/**
 * free_dlistint - This will free a dlistint_t list.
 * @head: pointer to the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *qnode;
	dlistint_t *pnode;

	if (head)
	{
		qnode = head;
		pnode = head->next;
		while (pnode)
		{
			free(qnode);
			qnode = pnode;
			pnode = pnode->next;
		}
		free(qnode);
	}
}
