#include "lists.h"

/**
 *get_dnodeint_at_index - Get the dnodeint at index object.
 *@head: Pointer to the head of the list.
 *@index: Index of the node.
 *
 *Return: Nth node of the list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
