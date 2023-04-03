#include "lists.h"

/**
 *print_listint - Prints all the elements of a listint_t list.
 *@h: Pointer to the start of the list
 *
 *Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_size++;
		h = h->next;
	}
	return (node_size);
}
