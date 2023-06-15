# include "lists.h"

/**
 * sum_dlistint - Sum of elements in a dlistint_t.
 * @head: Pointer to the head of the dlistint_t.
 *
 * Return: Distint sum else 0.
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
		return (sum);

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
