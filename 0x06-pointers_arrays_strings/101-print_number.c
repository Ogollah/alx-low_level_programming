#include "main.h"

/**
 *print_number - prints an integre
 *@n: An iteger to be printed
 *
 *Return: Integer
 */
void print_number(int n)
{
	unsigined int = i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	char str[] = (char)i;
	while (i != 0)
	{
		num = i / 10;
		
