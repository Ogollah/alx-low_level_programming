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
	listint_t *ptr = h;

	while (ptr)
	{
		(ptr->next != NULL) ? printf("%d\n", ptr->n) :
			printf("%d\n", ptr->n);
		node_size++;
		ptr = ptr->next;
	}
	return (node_size);
}
