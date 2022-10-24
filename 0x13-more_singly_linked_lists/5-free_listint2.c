#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: head of a list.
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr_node;

	if (head != NULL)
	{
		curr_node = *head;
		while ((temp = curr_node) != NULL)
			curr_node = curr_node->next, free(temp);
		*head = NULL;
	}
}
