#include "main.h"

/**
 *_puts_recursion - Prints a string, followed by a new line.
 *@s: string to be printed.
 *
 *Return: Void.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s != '\0');
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar('\n');
	}
}
