#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - Concatenates two strings @s1 with @s2.
 *@s1: The first string
 *@s2: String to be concatenated to string @s1.
 *@n: Number of @s2 bytes to be concatenated.
 *
 *Return: Pointer to newly alocated space, if fn faill NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, i, j, con = 0;
	char *mal;

	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len])
	{
		len++;
	}
	len += n;

	mal = malloc(sizeof(char) * len + 1);

	if (mal == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != 0; i++)
		mal[con++] = s1[i];
	for (j = 0; j < n; j++)
		mal[con++] = s2[j];
	return (mal);
}
