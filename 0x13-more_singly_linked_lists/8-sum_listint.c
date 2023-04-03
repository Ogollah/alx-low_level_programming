#include "lists.h"

/**
 *sum_listint - Sum the data of a listint_t list.
 *@head: Pointer to the start of the list
 *
 *Return: Sum of the list else 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
