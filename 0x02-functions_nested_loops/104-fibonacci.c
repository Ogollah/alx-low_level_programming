#include <stdio.h>

/**
 *main - print the first 98 fib numbers, starting with 1 and 2
 *
 *Return:Always 0 (Succes)
 */
int main(void)
{
	unsigned int first = 1, sec = 2, next;
	int i = 0;

	printf("%u, %u", first, sec);
	while (i < 95)
	{
		next = first + sec;
		printf(", %u", next);
		first = sec;
		sec = next;
		i++;
	}
	putchar('\n');
	return (0);
}
