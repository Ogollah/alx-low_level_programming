#include <stdio.h>
#include <stdlib.h>

/**
 *main - Multiplies two numbers.
 *@argc: Argument count.
 *@argv: Argument array.
 *
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = num1 * num2;

	printf("%d\n", mult);
	return (0);
}
