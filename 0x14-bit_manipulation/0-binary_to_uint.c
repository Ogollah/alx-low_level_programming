#include "main.h"

/**
 *_atoi - Converts a string to an integer
 *@s: String to be converted
 *
 *Return: Converted integer
 */
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *str;

	str = s;
	num = 0;
	sign = 1;
	while (*str != 0 && (*str < '0' || *str > '9'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (*str != 0)
	{
		do {
			num = num * 10 + (*str - '0');
			str++;
		} while (*str >= '0' && *str <= '9');
	}
	return (num * sign);
}

/**
 *binary_to_uint - Converts a binary number to an unsigned int.
 *@b: A pointer to a string of 0 and 1 chars.
 *
 *Return: Converted number else 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary_dec = 0, i, bin_num;
	unsigned int base = 1, temp;

	if (!b)
		return (0);

	for (i = 0; b[i] != 0; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	bin_num =  _atoi(b);

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
