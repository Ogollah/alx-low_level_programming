#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords
 *
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int pass[90];
	int i = 0, sum, n;

	sum = 0;

	srand(time(NULL));

	while (i < 90)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
        i++;
	}

	return (0);
}
