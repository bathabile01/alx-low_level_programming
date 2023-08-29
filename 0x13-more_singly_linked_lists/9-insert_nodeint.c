#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list,
 * at a given position
 * @head: Pointer to the first node in the list
 * @idx: Index where the new node is added
 * @n: Data to insert in the new node
 *
 * Return: Pinter to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *numb;
	listint_t *link = *head;

	numb = malloc(sizeof(listint_t));
	if (!numb || !head)
		return (NULL);

	numb->n = n;
	numb->next = NULL;

	if (idx == 0)
	{
		numb->next = *head;
		*head = numb;
		return (numb);
	}

	for (j = 0; link && j < idx; j++)
	{
		if (j == idx - 1)
		{
			numb->next = link->next;
			link->next = numb;
			return (numb);
		}
		else
			link = link->next;
	}

	return (NULL);
}
