#include "main.h"

/**
 *print_times_table - Prints the n times table strting with 0
 *@n:The value to evaluete the length of times table
 *
 *Return: void
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n <= 0 || n < 15)
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (result < 10)
				{
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
