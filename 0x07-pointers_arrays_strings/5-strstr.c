#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack:    String to locate from
 * @needle:      String to be located
 *
 * Return:       Pointer to the beginning of the located string else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, matched_str = 0;

	while (*haystack != '\0')
	{
		matched_str = 1;
		for (i = 0; needle[i]; i++)
		{
			if (*(haystack + i) != *(needle + i))
			{
				matched_str = 0;
				break;
			}
		}

		if (matched_str == 1)
		{
			return (haystack);
		}

		haystack++;
	}
	return (0);
}
