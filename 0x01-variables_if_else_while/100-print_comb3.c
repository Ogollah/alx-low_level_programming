#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int ones, tens;

	for (ones = '0'; ones <= '9'; ones++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			if (ones < tens)
			{
				putchar(ones);
				putchar(tens);
				if (ones != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
