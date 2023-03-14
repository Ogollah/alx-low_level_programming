#include "main.h"
#include <stdlib.h>

/**
 *create_array - Creates an array of chars,
 *               and initializes it with a specific char.
 *@size: Size of the array.
 *@c: Characters to be created.
 *
 *Return: A pointer to the array, NULL if size = 0 or it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *mal;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	mal = malloc(sizeof(char) * size);
	if (mal == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			mal[i] = c;
	}
	return (mal);
}
