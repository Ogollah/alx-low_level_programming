#include "lists.h"

/**
 *delete_nodeint_at_index - Deletes the node at index
 *                          @index of a listint_t list.
 *@head: Pointer to the start of the list
 *@index: Index of the list.
 *
 *Return: 1 else -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *ptr, *temp;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	ptr = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (ptr->next == NULL)
		{
			return (-1);
		}
		ptr = ptr->next;
	}

	if (ptr->next == NULL)
	{
		return (-1);
	}
	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);
	return (1);
}
