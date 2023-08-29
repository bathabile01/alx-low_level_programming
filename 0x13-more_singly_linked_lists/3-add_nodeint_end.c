#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a linked list
 * @head: Pointer to the first element in the list
 * @n: Data to insert in the new element
 *
 * Return: Pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *numb;
	listint_t *temp = *head;

	numb = malloc(sizeof(listint_t));
	if (!numb)
		return (NULL);

	numb->n = n;
	numb->next = NULL;

	if (*head == NULL)
	{
		*head = numb;
		return (numb);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = numb;

	return (numb);
}
