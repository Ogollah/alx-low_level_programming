#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
	return (0);
}
