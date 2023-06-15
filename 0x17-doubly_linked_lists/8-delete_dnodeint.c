#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at a given index in the list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if deletion succeeded else -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *temp_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index && current_node != NULL; i++)
		current_node = current_node->next;

	if (current_node == NULL)
		return (-1);

	temp_node = current_node;
	current_node->prev->next = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = current_node->prev;
	free(temp_node);
	return (1);
}
