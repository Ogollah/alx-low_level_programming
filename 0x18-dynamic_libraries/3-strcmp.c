#include "main.h"

/**
 *_strcmp - Compares two strings
 *@s1: String destination
 *@s2: String source to be copied
 *
 *Return: The defference btwn the two strings in bytes
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
