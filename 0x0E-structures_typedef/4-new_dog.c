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
	dog_t *dog_name;
	char *name_cpy, *owner_cpy;
	unsigned int i, name_ln = 0, owner_ln = 0;

	if (name == NULL || age < 0 || owner == NULL)
	{
		free(dog_name);
		return (NULL);
	}
	dog_name = malloc(sizeof(div_t));
	if (dog_name == NULL)
		return (NULL);
	while (name[name_ln])
	{
		name_ln++;
	}
	while (owner[owner_ln])
	{
		owner_ln++;
	}
	name_cpy = malloc(sizeof(char) * (name_ln + 1));
	if (name_cpy == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
	{
		name_cpy[i] = name[i];
	}
	owner_cpy = malloc(sizeof(char) * (owner_ln + 1));
	if (owner_cpy == NULL)
		return (NULL);
	for (i = 0; owner[i] != '\0'; i++)
	{
		owner_cpy[i] = owner[i];
	}

	dog_name->name = name_cpy;
	dog_name->owner = owner_cpy;
	dog_name->age = age;

	return (dog_name);
}
