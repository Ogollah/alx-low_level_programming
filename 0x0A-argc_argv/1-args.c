#include <stdio.h>

/**
 *main - Prints the number of arguments passed into it.
 *@argc: Argument count.
 *@argv: Argument array.
 *
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
