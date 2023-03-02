#include "main.h"

/**
 *_strncat - Concatenates two strings
 *@dest: String destination
 *@src: String source
 *@n: Number of bytes from @src
 *
 *Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int des = 0, source;

	while (dest[des] != 0)
	{
		des++;
	}
	for (source = 0; src[source] != 0 && source < n; source++)
	{
		dest[des + source] = src[source];
	}
	dest[des + source] = '\0';
	return (dest);
}
