#include "main.h"

/**
 *string_toupper - Changes all lowercase letters to uppercase
 *@str: String to be changed
 *
 *Return: Converted string
 */
char *string_toupper(char *str)
{
	int i, j = 'a' - 'A';

	for (i = 0; str[i] != '\0'; i++)
	{
		(str[i] >= 'a' && str[i] <= 'z') ?
			str[i] = str[i] - j : str[i];
	}
	return (str);
}
