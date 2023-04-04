#include "lists.h"

/**
 *insert_nodeint_at_index - Prints all the elements of a listint_t list.
 *@head: Pointer to the start of the list
 *@idx: Index of the list.
 *@n: Value to be added.
 *
 *Return: Address of new node if failed NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i;
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	temp = *head;
	if (idx == 0)
		ptr->next = *head;
		*head = ptr;

	for (i = idx; i > idx; i--)
	{
		if (temp->next == NULL)
		{
			return (NULL);
		}
		else
		{
			temp = temp->next;
		}
	}
	ptr->next = temp->next;
	temp->next = ptr;
	return (ptr);
}
