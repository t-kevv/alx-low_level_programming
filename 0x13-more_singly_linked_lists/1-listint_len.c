#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: ---
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nds = 0;

	while (h != NULL)
	{
		nds++;
		h = h->next;
	}
	return (nds);
}

