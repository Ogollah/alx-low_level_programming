#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String to be converted
 *
 * Return: String converted to 1337
 */
char *leet(char *str)
{
	int i, j;
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; num[j] != '\0'; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				str[i] = num[j];
			}
		}
	}
	return (str);
}
