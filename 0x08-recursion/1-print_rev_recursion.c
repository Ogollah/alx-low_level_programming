#include "main.h"

/**
 *_print_rev_recursion - Prints a string in reverse, followed by a new line.
 *@s: string to be reversed.
 *
 *Return: Void.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
