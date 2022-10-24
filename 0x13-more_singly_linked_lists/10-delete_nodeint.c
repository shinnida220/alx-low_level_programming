#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev_node;
	listint_t *next_node;

	prev_node = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev_node != NULL; i++)
			prev_node = prev_node->next;
	}

	if ((prev_node->next == NULL && index != 0) || prev_node == NULL)
		return (-1);

	next_node = prev_node->next;

	if (index != 0)
	{
		prev_node->next = next_node->next;
		free(next_node);
	}
	else
	{
		free(prev_node);
		*head = next_node;
	}

	return (1);
}
