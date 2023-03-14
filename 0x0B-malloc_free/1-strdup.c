#include "main.h"
#include <stdlib.h>

/**
 *_strdup - Returns a pointer to a newly allocated space in memory,
 *          which contains a copy of the string given as a parameter.
 *@str: String to be copied.
 *
 *Return: A pointer to the duplicate string, NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	char *mal;
	unsigned int i, len = 0;

	while (str[len] != 0)
	{
		len++;
	}
	if (str == NULL)
	{
		return (NULL);
	}

	mal = malloc(sizeof(char) * len);
	if (mal == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != 0; i++)
			mal[i] = str[i];
	}
	return (mal);
}
