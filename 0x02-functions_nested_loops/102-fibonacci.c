#include <stdio.h>

/**
 *main - prints 50 fib numbers starting with 1 and 2
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int first = 1, sec = 2, next = 1, i = 0;

	while (i <= 49)
	{
		printf("%d", next);
		first = sec;
		sec = next;
		next = first + sec;

		if (i < 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
