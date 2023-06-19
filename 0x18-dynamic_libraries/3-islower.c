#include "main.h"

/**
 *_islower - Checks for lowercase character
 *@c: The int to be checked
 *
 *Return:1 if char is lowercase else 0
 */
int _islower(int c)
{
	char lower;
	int flag = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (c == lower)
		{
			flag = 1;
			break;
		}
	}
	return (flag);
}
