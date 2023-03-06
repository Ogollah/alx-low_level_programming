#include "main.h"

/**
 *_strspn - Calculate the length of the initial substring of the string
 *           pointed to by @s made up of only character contained in the
 *            string pointed at by @accept.
 *@s: String to be scanned.
 *@accept: String containing the characters to match.
 *
 *Return: Number of characters in @s consisting only of characters from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, bytes = 0, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;

		for (j = 0; accept[j] != '\n'; j++)
		{
			bytes++;
			count = 1;
		}
		if (count == 0)
		{
			return (bytes);
		}
	}
	return (bytes);
}
