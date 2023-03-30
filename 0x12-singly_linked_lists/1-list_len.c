#include "lists.h"

/**
 * list_len  - Prints number of elements of a list_t list.
 *
 * @h: Pointer to the start of the singly linked list
 *
 * Return: Number of elements in @h
 */

size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}

	return (elem);
}
