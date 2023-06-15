#include "lists.h"

/**
 * dlistint_len - Count the len of a @dlistint_t.
 * @h: Pointer to the head of the @dlistint_t
 *
 * Return: Len of @dlistint_t.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
