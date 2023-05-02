#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: ----
 *
 * Return: the data inside the element
 */

int pop_listint(listint_t **head)
{
	if (!head || !*head)
		return (0);

	listint_t *temp = *head;
	*head = (*head)->next;
	int num = temp->n;

	free(temp);
	return (num);
}

