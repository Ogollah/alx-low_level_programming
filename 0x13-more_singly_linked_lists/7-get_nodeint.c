#include "lists.h"

/**
 *get_nodeint_at_index - Search the nth node of a listint_t list.
 *@head: Pointer to the start of the list
 *@index: The nth index.
 *
 *Return: nth node, if node does not exit NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int ln = 0, flag = 0;

	while (head != NULL)
	{
		if (index == ln)
		{
			flag = 1;
			return (head);
		}
		ln++;
		head = head->next;
	}
	if (flag == 0)
		return (NULL);
}
