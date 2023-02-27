#include "main.h"

/**
 *puts_half - prints halsf of a string followed by a new line
 *@str: String whose half is printed
 *
 *Return: Void
 */
void puts_half(char *str)
{
	int i, length_of_the_string = 0;

	while (str[length_of_the_string] != 0)
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 == 0)
	{
		for (i = length_of_the_string / 2; i <= length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		int n = (length_of_the_string - 1) / 2;

		for (i = n + 1; i <= length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
