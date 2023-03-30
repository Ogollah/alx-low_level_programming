#include "lists.h"

/**
 * add_node_end - Add a node to the end of @head linked list
 * @head: Initial node of a singly linked list
 * @str:  String value to copy to new node
 *
 * Return: Pointer to the beginning of the @head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	int len = 0;

	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	new_node->str = strdup(str);
	new_node->len;
	new_node->next == NULL;

	if (*head == NULL)
	{
		*head == new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (*head);
}
