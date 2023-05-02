#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
		sum += head->n;
	return (sum);
}

