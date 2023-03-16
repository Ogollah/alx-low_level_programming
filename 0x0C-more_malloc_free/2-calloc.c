#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: Array
 * @size: Size of the array
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mal;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mal = malloc(nmemb * size);
	if (mal == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		mal[i] = 0;

	return (mal);
}
