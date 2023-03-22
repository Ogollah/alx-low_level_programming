#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_num_words - Count string
 * @c: String to count
 *
 * Return: Count
 */
int count_num_words(char *c)
{
	int i, num = 0;

	for (i = 0; c[i]; i++)
	{
		num++;
	}
	return (num + 1);
}

/**
 * strtow - Splits a string into words
 * @str: String to split
 *
 * Return: Null if str is null , str = "" or error
 *         else Pointer to array of strings.
 */

char **strtow(char *str)
{
	int i, j, k, l, num_count = 0, wc = 0;
	char **wmal;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_count = count_words(str);
	if (num_count == 1)
		return (NULL);
	wmal = (char **)malloc(num_count * sizeof(char *));
	if (wmal == NULL)
		return (NULL);
	wmal[num_count - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			wmal[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (wmal[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(wmal[k]);
				free(wmal[num_count - 1]);
				free(wmal);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				wmal[wc][l] = str[i + l];
			wmal[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (wmal);
}
