#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 * @dest: This is dest
 * @src: Where we copy from
 *
 * Return: the poiter value
 */
char *_strcpy(char *dest, char *src)
{
	char *begg = dest;

	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (begg);
}
