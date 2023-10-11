#include "search_algos.h"

/**
 * interpolation_search - perform interpolation search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n",
			       pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
