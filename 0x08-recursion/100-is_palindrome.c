#include "main.h"

/**
 *check_palindrome - Check for palindrom from a string
 *@s: String to be checked.
 *@f: First char
 *@l: Last char
 *
 * Return: 1 if @s is palindrome else 0
 */
int check_palindrome(char *s, int f, int l)
{
	if (f == l)
	{
		return (1);
	}
	if (s[f] != s[l])
	{
		return (0);
	}
	if (f < l + 1)
	{
		return (check_palindrome(s, f + 1, l - 1));
	}
	return (1);
}

/**
 *_strlen_recursion - Returns the length of a string @s.
 *@s: String whole length is to be detarmined.
 *
 *Return: Length of @s.
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count = count + _strlen_recursion(s + 1);
	}
	return (count);
}

/**
 *is_palindrome - Checks if @s palindrome.
 *@s: String to be checked.
 *
 *Return: 1 if palindrome else 0.
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	return (check_palindrome(s, 0, n - 1));
}
