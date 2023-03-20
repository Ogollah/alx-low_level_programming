#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: pointer to be freed
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
