#include "lists.h"

/**
 *get_nodeint_at_index - Search the @index node of a listint_t list.
 *@head: Pointer to the start of the list.
 *@index: The index.
 *
 *Return: nth node, if node does not exit NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ln = 0;

	while (head && ln < index)
	{
		head = head->next;
		ln++;
	}
	head = (head) ? head : NULL;
	return (head);
}
