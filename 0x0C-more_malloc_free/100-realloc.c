#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Rreallocates a memory block using malloc and free
 * @ptr: Pointer to memory allocated
 * @old_size: Init size of mem
 * @new_size: New size of mem
 *
 * Return: Void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *final_mem, *src_add;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	final_mem = malloc(new_size);
	if (final_mem == NULL)
		return (NULL);

	src_add = ptr;

	for (i = 0; i < new_size && i < old_size; i++)
		final_mem[i] = src_add[i];
	free(ptr);

	return (final_mem);
}
