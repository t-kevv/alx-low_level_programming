#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: pointer
 * @index: node to delete
 *
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (!head || !(*head))
		return (-1);
	listint_t *c = *head;
	listint_t *p = NULL;
	unsigned int i = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	while (i < index)
	{
		if (!c)
			return (-1);
		p = c;
		c = c->next;
		i++;
	}

	p->next = c->next;
	free(c);

	return (1);
}

