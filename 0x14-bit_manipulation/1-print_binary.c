#include "main.h"

/**
 *print_binary - Prints the binary representation of a number.
 *@n: Number to conver to binary.
 *
 *Return: Void.
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int position, size = ((sizeof(unsigned long int) * 8) - 1);

	for (i = size; i >= 0; i--)
	{

		position = n >> i;

		if (position & 1)
			count++;

		if (count)
			putchar((position & 1) + '0');

	}
	if (count == 0)
		putchar('0');
}
