#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers.
 * @min: Min input
 * @max: Max input
 *
 * Return: Pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *mal;
	int i, len = 0;

	if (min > max)
		return (NULL);

	while (len < (max - min))
	{
		len++;
	}

	mal = malloc(sizeof(int) * (len + 1));
	if (mal == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		mal[i] = min++;
	}

	return (mal);
}
