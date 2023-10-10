#include "search_algos.h"

/**
 * binary_search - search using a binary search
 * @array: the array
 * @size: array size
 * @value: the search value
 * Return: where the value is located or -1 on fail
 */
int binary_search(int *array, size_t size, int value)
{
	if (size == 0 || array == NULL)
		return (-1);

	int low = 0;
	int high = size - 1;

	while (low <= high)
	{
		int middle = (low + high) / 2;

		printf("Searching in array: ");
		for (size_t index = low; index <= high; index++)
		{
			printf(index < high ? "%d, " : "%d\n", array[index]);
		}

		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			low = middle + 1;
		}
		else
		{
			high = middle - 1;
		}
	}

	return (-1);
}
