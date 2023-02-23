#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	long int tar = 612852475143, divisor = 2;

	while (tar / divisor != 1)
	{
		if (tar % divisor != 0)
		{
			divisor++;
		}
		else
		{
			tar /= divisor;
		}
	}
	printf("%lu\n", tar);
	return (0);
}
