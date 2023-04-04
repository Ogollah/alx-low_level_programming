#include "lists.h"

/**
 *reverse_listint - Reverses a listint_t linked list.
 *@head: Pointer to the start of the list.
 *
 *Return: A pointer to the first node of the reversed list..
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	if (*head)
	{
		ptr = *head;
		temp = (*head)->next;
		*head =  (*head)->next;

		ptr->next = NULL;

		while (*head)
		{
			*head = (*head)->next;
			temp->next = ptr;

			ptr = temp;
			temp = *head;
		}
		*head = ptr;
	}
	return (*head);
}
