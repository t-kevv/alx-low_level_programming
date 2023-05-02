#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: pionter
 * @index: node
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *c = head;

	while (c && count < index)
	{
		c = c->next;
		count++;
	}
	return (c ? c : NULL);
}

