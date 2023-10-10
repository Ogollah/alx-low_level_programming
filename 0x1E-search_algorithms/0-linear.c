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
	if (array == NULL)
		return (-1);

	for (size_t idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
