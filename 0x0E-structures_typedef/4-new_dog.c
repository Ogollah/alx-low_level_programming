#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - Creates a new dog.
 *@name: Name
 *@age: Age
 *@owner: Owner
 *
 *Return: New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cpy, *owner_cpy;
	unsigned int i, name_len = 0, owner_len = 0;

	new_dog = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		name_len++;

	for (i = 0; owner[i] != '\0'; i++)
		owner_len++;

	name_cpy = malloc(sizeof(char) * (name_len + 1));
	if (name_cpy == NULL)
		return (NULL);

	owner_cpy = malloc(sizeof(char) * (owner_len + 1));
	if (owner_cpy == NULL)
		return (NULL);

	for (i = 0; i <= name_len; i++)
		name_cpy[i] = name[i];

	for (i = 0; i <= owner_len; i++)
		owner_cpy[i] = owner[i];

	new_dog->name = name_cpy;
	new_dog->owner = owner_cpy;
	new_dog->age = age;
	return (new_dog);
}
