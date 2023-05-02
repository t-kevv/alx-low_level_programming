#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer
 * @idx: index
 * @n: data
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *nnode, *pnode = NULL, *cnode = *head;

	nnode = malloc(sizeof(listint_t));
	if (!nnode)
		return (NULL);
	nnode->n = n;
	if (idx == 0)
	{
		nnode->next = *head;
		*head = nnode;
		return (nnode);
	}
	for (i = 0; cnode && i < idx; i++)
	{
		pnode = cnode;
		cnode = cnode->next;
	}
	if (i == idx)
	{
		nnode->next = cnode;
		pnode->next = nnode;
		return (nnode);
	}
	free(nnode);
	return (NULL);
}

