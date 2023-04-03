#include "lists.h"

/**
 *free_listint - Frees a listint_t list.
 *@head: Pointer to the start of the list
 *
 *Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
