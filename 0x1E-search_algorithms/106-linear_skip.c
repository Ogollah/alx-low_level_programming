#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * linear_skip - perform linear skip search in a skip list
 * @list: pointer to the head of the skip list
 * @value: search value
 *
 * Return: pointer to the first node where value is located;
 *         NULL if value not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	if (list == NULL)
		return (NULL);

	skiplist_t *current = list;
	skiplist_t *express = NULL;

	while (current->n < value)
	{
		express = current;
		if (current->express)
			current = current->express;
		else
		{
			while (current->next)
				current = current->next;
			break;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index,
		       current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", express->index,
	       current->index);

	while (express->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index,
		       express->n);
		if (express->n == value)
			return (express);
		express = express->next;
	}

	return (NULL);
}
