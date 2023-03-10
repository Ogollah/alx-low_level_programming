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
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	int mult = atoi(argv[1]) * atoi(argv[1]);

	printf("%d\n", mult);
	return (0);
}
