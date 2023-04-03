#include "lists.h"

/**
 *add_nodeint_end - Adds a new node at the end of a listint_t list.
 *@head: Pointer to the start of the list
 *@n: Value to be added.
 *
 *Return: Address of the new element else NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr->n = n;
		if (*head == NULL)
		{
			ptr->next = NULL;
			*head = ptr;
		}
		else
		{
			temp = *head;
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = ptr;
		}
	}
	return (ptr);
}
