#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: head of a list.
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node;
	listint_t *next_node;

	prev_node = NULL, next_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head, *head = next_node;
	}

	*head = prev_node;
	return (*head);
}
