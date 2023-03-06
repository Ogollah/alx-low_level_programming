#include "main.h"

/**
 *_memcpy - Copies memory area.
 *@dest: Destination of the copied memory area.
 *@src: Memory area to be copied.
 *@n: Number of bytes to be copied.
 *
 *Return: Pointer to the memory area @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
