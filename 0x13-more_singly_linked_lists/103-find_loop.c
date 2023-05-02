#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked
 *
 * Return: address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i = head;
	listint_t *j = head;

	while (i && j && j->next)
	{
	j = j->next->next;
	i = i->next;
	if (j == i)
	{
	i = head;
	while (i != j)
	{
	i = i->next;
	j = j->next;
	}
	return (j);
	}
	}
	return (NULL);
}

