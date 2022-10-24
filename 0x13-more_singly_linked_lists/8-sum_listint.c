#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum_of_list;

	sum_of_list = 0;
	while (head != NULL)
		sum_of_list += head->n, head = head->next;

	return (sum_of_list);
}
