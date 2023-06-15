#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new node at a given position in the list.
 * @h: Pointer to the head of the list.
 * @idx: Index where to insert new node.
 * @n: Value of the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *prev_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	prev_node = *h;
	for (i = 0; i < idx - 1 && prev_node != NULL; i++)
		prev_node = prev_node->next;

	if (prev_node == NULL)
		return (NULL);

	if (prev_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = prev_node;
	new_node->next = prev_node->next;
	prev_node->next->prev = new_node;
	prev_node->next = new_node;

	return (new_node);
}
