#include "main.h"

/**
 *_isdigit - Checks if argument is a digit 0 - 9
 *@c:Is the argument to be checked
 *
 *Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
	int i, flag = 0;

	for (i = 0; i <= 9; ++i)
	{
		if (i == c)
		{
			flag = 1;
			break;
		}
	}
	return (flag);
}
