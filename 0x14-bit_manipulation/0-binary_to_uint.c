#include "main.h"

/**
 *binary_to_uint - Converts a binary number to an unsigned int.
 *@b: A pointer to a string of 0 and 1 chars.
 *
 *Return: Converted number else 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i, count = 0, base = 2, j;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != 0; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	while (b[count])
	{
		count++;
	}
	for (i = 0; b[i] != 0; i++)
	{
		if (b[count - 1] == '1')
		{
			if (i == 0)
			{
				dec = 1;
			}
			else
			{
				unsigned int result = 1;

				for (j = 0; j < i; j++)
				{
					result *= base;
				}
				 dec += result;
			}
		}
		count -= 1;
	}

	return (dec);
}
