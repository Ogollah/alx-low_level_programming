#include "lists.h"

/**
 * add_node- Add a node to the beginning of @head linked list
 * @head: Initial node of a singly linked list
 * @str:  String value to copy to new node
 *
 * Return: Pointer to the beginning of the @head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

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
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
