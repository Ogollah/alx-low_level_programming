#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: String input
 *
 * Return: Encoded string using rot13
 */

char *rot13(char *str)
{
	int i, j;

	char key[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alp[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; key[j] != '\0' ; j++)
		{
			if (str[i] == key[j])
			{
				str[i] = alp[j];
				break;
			}
		}
	}
	return (str);
}
