#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t data = 0;

	while (h)
	{
		printf("%d\n", h->n);
		data++;
		h = h->next;
	}

	return (data);
}
