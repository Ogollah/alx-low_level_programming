#include "main.h"
/**
 *_isalpha - Check for alphabetic character
 *@c:Character to be checked
 *
 *Return:1 if character is alphabetic else 0
 */
int _isalpha(int c)
{
	char lower, upper;
	int flag = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == c)
		{
			flag = 1;
			break;
		}
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (upper == c)
		{
			flag = 1;
			break;
		}
	}
	return (flag);
}
