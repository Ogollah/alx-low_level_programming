#include "lists.h"

/**
 *pop_listint - Deletes the head node of a listint_t list.
 *@head: Pointer to the start of the list
 *
 *Return: Head node's data else 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);

	else
	{
		ptr = *head;
		n = ptr->n;
		*head = ptr->next;
		free(ptr);
		return (n);
	}
}
