#include "main.h"
#include <stdio.h>

/**
 *print_array - Prints n elements of an array of integers, followed by new line
 *@a: Array
 *@n: Number of integers to be printed
 *
 *Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", i);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
