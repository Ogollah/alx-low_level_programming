#include "main.h"

/**
 *wildcmp - Compares @s1 and @s2 to check if identical.
 *@s1: First string to be compaired.
 *@s2: Second string to compared with @s1.
 *
 *Return: 1 if @s1 and @s2 are identical else 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
	{
		return (1);
	}
	if (*s2 == '*' && *(s2 + 1) != 0 && *s1 == 0)
	{
		return (0);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else
	{
		return (0);
	}
}
