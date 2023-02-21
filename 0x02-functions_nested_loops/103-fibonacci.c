#include <stdio.h>

/**
 *main - Print sum of all even-laued terms in feb numbers < 4000000
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	long int first = 1, sec = 2, sum = 2;

	while (next < 4000000)
	{
		next = first + sec;
		if (next % 2 == 0)
		{
			sum += next;
		}
		first = sec;
		sec = next;
	}
	printf("%ld\n", sum);
	return (0);
}
