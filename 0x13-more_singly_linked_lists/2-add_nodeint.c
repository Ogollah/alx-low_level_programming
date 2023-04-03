#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beggining of a listint_t list.
 *@head: Pointer to the start of the list
 *@n: Value to be added.
 *
 *Return: Address of the new element else NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
