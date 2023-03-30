#include "lists.h"

/**
 * print_list  - Prints all the elements of a list_t list.
 *
 * @h: Pointer to the start of the singly linked list
 *
 * Return: Number of nodes in @h
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		(h->str != NULL) ? printf("[%d] %s\n", h->len, h->str) :
			printf("[0] (nil)\n");

		nodes++;
		h = h->next;
	}

	return (nodes);
}
