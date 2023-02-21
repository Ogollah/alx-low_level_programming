#include "main.h"

/**
 *times_table - print multple table
 *
 *Return: void
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result / 10 >= 1)
			{
				_putchar((result / 10) + '0');
			}
			_putchar(' ');
			_putchar((result % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
