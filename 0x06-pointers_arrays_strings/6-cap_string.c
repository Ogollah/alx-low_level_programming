#include "main.h"

/**
 *cap_string - Capitalize all words of a string
 *@str: String to be capitalized
 *
 *Return: Capitalized words in a sentence
 */
char *cap_string(char *str)
{
	int i, j, alp = 'a' - 'A';
	char sep[] = " \t\n,;.!?\"(){}";

	i = 1;
	(str[0] >= 'a' && str[0] <= 'z') ?
		str[0] -= alp : str[0];
	while (str[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			(str[i - 1] == sep[j] && (str[i] >= 'a' &&
				 str[i] <= 'z')) ? str[i] -= alp : str[i];
		i++;
	}
	return (str);
}
