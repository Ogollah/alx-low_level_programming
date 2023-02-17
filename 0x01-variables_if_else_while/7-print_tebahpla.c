#include <stdio.h>

/**
 *main - Entry piont
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
