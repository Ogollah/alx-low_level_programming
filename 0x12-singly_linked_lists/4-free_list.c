#include "lists.h"

/**
 * free_list - Frees linked list
 * @head: Initial node of a singly linked list
 *
 * Return: Void.
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
	}
}
