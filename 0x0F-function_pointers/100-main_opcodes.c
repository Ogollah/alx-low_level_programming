#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its main function
 * @argc: Number of arguments.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*add)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < j; i++)
	{
		opcode = *(unsigned char *)add;
		printf("%.2x", opcode);

		if (i == j - 1)
			continue;
		printf(" ");

		add++;
	}

	printf("\n");

	return (0);
}
