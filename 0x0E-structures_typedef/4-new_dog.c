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
	dog_t *dog_new_name;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog_new_name = malloc(sizeof(dog_t));
	if (dog_new_name == NULL)
		return (NULL);
	while (name[name_ln])
	{
		name_ln++;
	}
	dog_new_name->name = malloc(name_ln * sizeof(char));
	if (dog_new_name->name == NULL)
	{
		free(dog_new_name);
		return (NULL);
	}
	for (i = 0; i < name_ln; i++)
		dog_new_name->name[i] = name[i];
	dog_new_name->age = age;
	while (owner[owner_ln])
	{
		owner_ln++;
	}
	dog_new_name->owner = malloc((owner_ln + 1) * sizeof(char));
	if (dog_new_name->owner == NULL)
	{
		free(dog_new_name->name);
		free(dog_new_name);
		return (NULL);
	}
	for (i = 0; i < owner_ln; i++)
		dog_new_name->owner[i] = owner[i];
	return (dog_new_name);
}
