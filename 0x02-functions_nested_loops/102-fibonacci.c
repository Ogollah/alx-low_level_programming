#include <stdio.h>

/**
 *main - prints 50 fib numbers starting with 1 and 2
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	long int first = 1, sec = 2, next;
	int i = 0;

	printf("%ld, %ld, ", first, sec);
	while (i <= 47)
	{
		next = first + sec;
		printf("%ld", next);
		first = sec;
		sec = next;
		if (i < 47)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
