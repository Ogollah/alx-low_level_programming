#include "lists.h"

/**
 *print_listint_safe - Prints a listint_t linked list.
 *@head: Pointer to the start of the list.
 *
 *Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;

	if (head == NULL)
	{
		exit (98);
	}

    while (head)
    {
        printf("%p", head);
        head = head->next;
        node++;
    }
    return(node);
}
