#include "lists.h"

/**
 *listint_len - Prints number of elements of a listint_t list.
 *@h: Pointer to the start of the list
 *
 *Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node_size = 0;
	listint_t *ptr = h;

	while (ptr)
	{
		node_size++;
		ptr = ptr->next;
	}
	return (node_size);
}
