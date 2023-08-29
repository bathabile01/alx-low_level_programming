#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list
 * @head:Ffirst node in the linked list
 *
 * Return: Resulting sum
 */

int sum_listint(listint_t *head)
{
	int numb = 0;
	listint_t *self = head;

	while (self)
	{
		numb += self->n;
		self = self->next;
	}

	return (numb);
}
