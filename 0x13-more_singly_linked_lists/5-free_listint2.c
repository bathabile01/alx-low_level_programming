#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: Pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *link;

	if (head == NULL)
		return;

	while (*head)
	{
		link = (*head)->next;
		free(*head);
		*head = link;
	}

	*head = NULL;
}
