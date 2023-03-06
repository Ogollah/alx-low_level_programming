#include "main.h"

/**
 *_memset - Fills a memory with a constant byte.
 *@s: String pointer to be filled with the constant char.
 *@b: Constant to fill the memory.
 *@n: Number of bytes to be field.
 *
 *Return: Pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
