#include "search_algos.h"

/**
 * jump_list - perform jump search in a linked list
 * @list: pointer to the head of the linked list
 * @size: number of nodes in the list
 * @value: search value
 *
 * Return: pointer to the first node where value is located;
 *          NULL if value not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	if (list == NULL || size == 0)
		return (NULL);

	size_t step = sqrt(size);
	listint_t *current = list;
	listint_t *prev = NULL;

	while (current && current->index < size && current->n < value)
	{
		prev = current;

		for (size_t i = 0; i < step && current->next; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index,
		       current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index,
	       current->index);

	current = prev;

	while (current && current->index < size && current->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index,
		       current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
