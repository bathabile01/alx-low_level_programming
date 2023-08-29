#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *data;

	while (head)
	{
		data = head->next;
		free(head);
		head = data;
	}
}
