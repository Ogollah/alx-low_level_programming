#include "main.h"

/**
 *_strcat - Concatenates two strings
 *@dest: String destination
 *@src: String source
 *
 *Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int des = 0, source;

	while (dest[des] != 0)
	{
		dest++;
	}
	for (source = 0; src[source] != 0; source++)
	{
		dest[des + source] = src[source];
	}
	return (dest);
}
