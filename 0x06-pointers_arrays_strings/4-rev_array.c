#include "main.h"

/**
 *reverse_array - Reverses the content of an array of integers of n length
 *@a: Array to reverse
 *@n: Array length
 *
 *Return: Reversed array
 */
void reverse_array(int *a, int n)
{
	int i, swap, end;

	end = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[end];
		a[end] = swap;
		end--;
	}
}
