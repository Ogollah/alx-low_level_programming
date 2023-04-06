#include "main.h"

/**
 *binary_to_uint - Converts a binary number to an unsigned int.
 *@b: A pointer to a string of 0 and 1 chars.
 *
 *Return: Converted number else 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary_dec = 0, i, bin_num;
	int base = 1, temp;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != 0; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	bin_num =  atoi(b);

	temp = bin_num;

	while (temp)
	{
		int last_dig = temp % 10;

		temp = temp / 10;

		binary_dec += last_dig * base;

		base = base * 2;
	}

	return (binary_dec);
}
