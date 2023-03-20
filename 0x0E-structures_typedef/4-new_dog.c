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
	unsigned int name_ln, owner_ln, i;
	char *name_cpy, *owner_cpy;
	dog_t *dog_new_name;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	dog_new_name = malloc(sizeof(dog_t));
	if (dog_new_name == NULL)
		return (NULL);
	while (name[name_ln] != '\0')
	{
		name_ln++;
	}
	name_cpy = malloc((name_ln + 1) * sizeof(char));
	if (name_cpy == NULL)
	{
		free(dog_new_name);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		name_cpy[i] = name[i];
	while (owner[owner_ln] != '\0')
	{
		owner_ln++;
	}
	owner_cpy = malloc((owner_ln + 1) * sizeof(char));
	if (dog_new_name->owner == NULL)
	{
		free(dog_new_name->name);
		free(dog_new_name);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		owner_cpy[i] = owner[i];

	dog_new_name->name = name_cpy;
	dog_new_name->age = age;
	dog_new_name->owner = owner_cpy;
	return (dog_new_name);
}
