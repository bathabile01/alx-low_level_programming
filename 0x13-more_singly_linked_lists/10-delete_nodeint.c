#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at a certain index
 * @head: Pointer to the first element in the list
 * @index: Index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *link = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(link);
		return (1);
	}

	while (j < index - 1)
	{
		if (!link || !(link->next))
			return (-1);
		link = link->next;
		j++;
	}


	current = link->next;
	link->next = current->next;
	free(current);

	return (1);
}
