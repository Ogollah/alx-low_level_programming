#include "main.h"

/**
 *_strpbrk - Searches a string for any of a set of bytes.
 *@s: String to be scanned.
 *@accept: String containing the characters to match.
 *
 *Return: A pointer to the byte in @s that matches one of the bytes in @accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
	{

		for (j = 0; accept[j] != '\n'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return ('\0');
}

