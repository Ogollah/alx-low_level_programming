#include "lists.h"

/**
 * free_dlistint - Free dlistint_t.
 * @head: Pointer to the head of the dlistint_t.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;
	dlistint_t *tmp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	current_node = head;

	while (current_node != NULL)
	{
		tmp = current_node;
		current_node = current_node->next;
		free(tmp);
	}
}
