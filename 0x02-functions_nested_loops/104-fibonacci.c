#include <stdio.h>

/**
 *main - print the first 98 fib numbers, starting with 1 and 2
 *
 *Return:Always 0 (Succes)
 */
int main(void)
{
	unsigned short int first = 1, sec = 2, next;
	int i = 0;

	printf("%hu, %hu", first, sec);
	while (i < 96)
	{
		next = first + sec;
		printf(", %hu", next);
		first = sec;
		sec = next;
		i++;
	}
	putchar('\n');
	return (0);
}
