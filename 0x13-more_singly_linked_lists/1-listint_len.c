#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked lists
 * @h: Linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t data = 0;

	while (h)
	{
		data++;
		h = h->next;
	}

	return (data);
}
