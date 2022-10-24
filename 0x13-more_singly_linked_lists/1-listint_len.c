#include "lists.h"

/**
 * listint_len - a function that prints all the elements of a listint_t list.
 * @h: head of a list.
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
		h = h->next, num_nodes++;

	return (num_nodes);
}
