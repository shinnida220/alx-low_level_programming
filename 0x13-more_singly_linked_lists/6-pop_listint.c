#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list,
 * and returns the head node's data (n).
 * @head: head of a list.
 * Return: head node's value
 */
int pop_listint(listint_t **head)
{
	int head_node_value;
	listint_t *h;
	listint_t *curr_node;

	if (*head == NULL)
		return (0);

	curr_node = *head;
	head_node_value = curr_node->n;

	h = curr_node->next;
	*head = h;
	free(curr_node);

	return (head_node_value);
}
