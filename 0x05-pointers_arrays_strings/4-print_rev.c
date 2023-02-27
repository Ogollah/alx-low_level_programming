#include "main.h"

/**
 *print_rev - Prints a string in reverse followed by a new line
 *@s: String to be reversed
 *
 *Return: Void
 */
void print_rev(char *s)
{
	int str_len = 0, i;

	while (s[str_len] != 0)
	{
		str_len++;
	}
	for (i = str_len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
