#include "main.h"

/**
 *print_diagonal - Draws a diagonal line
 *@n: height of the diagonal
 *
 *Return: void
 */
void print_diagonal(int n)
{
	int i, j;


	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
