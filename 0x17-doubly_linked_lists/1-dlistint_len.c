#include "lists.h"

/**
 * dlistint_len - a function that finds the number
 * of elements in a doubly-linked list
 * @h: head node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_nodes;

	num_nodes = 0;

	if (h == NULL)
		return (num_nodes);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
