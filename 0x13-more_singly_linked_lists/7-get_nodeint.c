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
	listint_t *ptr;
	int ln = 0, flag = 0;

	ptr = head;

	if (ptr == NULL)
		return;

	else
	{
		while (ptr != NULL)
		{
			if (index == ln)
			{
				flag = 1;
				return (ptr);
			}
			ln++;
			ptr = ptr->next;
		}
	}
	if (flag == 0)
		return (NULL);
}
