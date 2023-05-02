#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: -----
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while (*head)
	{
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
	}
	*head = NULL;
}

