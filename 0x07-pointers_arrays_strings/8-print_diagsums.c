#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                   of a square matrix of integers
 * @a: Square matrix
 * @size: Size of matrix
 *
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum_left = 0, sum_right = 0;

	for (i = 0; i < size * size; i += (size + 1))
	{
		sum_left += a[i];
	}

	for (i = size - 1; i < (size * size) - 1; i += (size - 1))
	{
		sum_right += a[i];
	}

	printf("%d, %d\n", sum_left, sum_right);
}
