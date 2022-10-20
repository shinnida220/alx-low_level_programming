#include "lists.h"
/**
 * add_node_end - a function that adds tail node
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_head, *temp_head;
	size_t num_char;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);
	for (num_char = 0; str[num_char]; num_char++)
		;

	new_head->len = num_char;
	new_head->next = NULL;
	temp_head = *head;

	if (temp_head == NULL)
		*head = new_head;
	else
	{
		while (temp_head->next != NULL)
			temp_head = temp_head->next;
		temp_head->next = new_head;
	}

	return (*head);
}
