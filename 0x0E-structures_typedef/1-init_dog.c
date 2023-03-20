#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - Initializes a variable of type struct dog
 *@d: Name of the structure
 *@name: Variable name
 *@age: Age
 *@owner: owner
 *
 *Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
		{
			return;
		}
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
