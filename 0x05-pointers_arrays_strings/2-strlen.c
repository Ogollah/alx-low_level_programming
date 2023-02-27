#include "main.h"

/**
 *_strlen - Calculate and returns the length of a string
 *@s: String to be checked
 *
 *Return: The size of the string
 */
int _strlen(char *s)
{
	int index_count = 0;

	while (s[index_count] != 0)
	{
		index_count++;
	}
	return (index_count);
}
