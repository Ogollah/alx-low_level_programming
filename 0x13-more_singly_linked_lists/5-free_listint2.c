#include "lists.h"

/**
 *free_listint2 - Frees a listint_t list.
 *@head: Pointer to the start of the list
 *
 *Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
