#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *c = *head, *n;

	while (c != NULL)
	{
		n = c->n;
		c->n = p;
		p = c;
		c = n;
	}
	*head = p;
	return (*head);
}

