#include "search_algos.h"

/**
 * linear_search - search for value in an integer array
 * @array: pointer to array of ints
 * @size: size of array
 * @value: value to locate
 *
 * Return: index of value; -1 if value not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while ((size_t)i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
