#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Concatenates two strings @s1 ans @ s2.
 *@s1: First string
 *@s2: Second string.
 *
 *Return: A pointer to the concatenated string string, NULL if insufficient memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *mal;
	unsigned int i, len = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len] || s2[len])
	{
		len++;
	}

	mal = malloc(sizeof(char) * len);
	if (mal == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != 0; i++)
			mal[j++] = s1[i];
		for (i = 0; s2[i] != 0; i++)
			mal[j++] = s2[i];
	}
	return (mal);
}
