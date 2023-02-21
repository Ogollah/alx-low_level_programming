#include "main.h"

/**
 *print_sign - Check the value of input and print the sign
 *@n:Value to br checked
 *
 *Return: 1 && pirnt + if n is < 0, 0 && 0 if n == 0 else -1 && 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
