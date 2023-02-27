#include "main.h"

/**
 *rev_string - Reverses a string
 *@s: String to be reversed
 *
 *Return: Void
 */
void rev_string(char *s)
{
	int j, i = 0, num = 0, hold = 0;

	while (s[num] != 0)
	{
		num++;
	}
	while (i < num / 2)
	{
		hold = s[i];
		s[i] = s[num - 1 - i];
		s[num - 1 - i] = hold;
		i++;
	}
	for (j = 0; j < num; j++)
	{
		s[j] != 0;
	}
}
