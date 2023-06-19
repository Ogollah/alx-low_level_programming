#include "main.h"

/**
 *_isupper - Checks for Uppercases
 *@c: Argument to be checked
 *
 *Return: 1 if c uppercase else 0
 */
int _isupper(int c)
{
	int cha, value = 0;

	for (cha = 'A'; cha <= 'Z'; cha++)
	{
		if (cha == c)
		{
			value = 1;
			break;
		}
	}
	return (value);
}
