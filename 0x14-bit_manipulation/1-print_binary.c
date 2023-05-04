#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to convert to binary.
 *
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
		{
			putchar('0');
		}
	}

	if (count == 0)
	{
		putchar('0');
	}
}
