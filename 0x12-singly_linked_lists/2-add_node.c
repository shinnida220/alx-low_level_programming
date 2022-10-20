#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string value to store in the node.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	size_t num_char;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);

	for (num_char = 0; str[num_char]; num_char++)
		;

	new_head->len = num_char;
	new_head->next = *head;
	*head = new_head;

	return (*head);
}
