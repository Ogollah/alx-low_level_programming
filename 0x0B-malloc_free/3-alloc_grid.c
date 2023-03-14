#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *@width: Width of the array
 *@height: Length of the array.
 *
 *Return: A pointer to a 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **mal;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	mal = malloc(sizeof(int *) * height);
	if (mal == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			mal[i] = malloc(sizeof(char *) * width);

			if (mal[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(mal[j]);
				free(mal);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				mal[i][j] = 0;
			}
		}
	}
	return (mal);
}
