#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the first node in the list to free
 */
void free_listint(listint_t *head)
{
	listint_t *cnode;

	while (head != NULL)
	{
		cnode = head;
		head = head->next;
		free(cnode);
	}
}

