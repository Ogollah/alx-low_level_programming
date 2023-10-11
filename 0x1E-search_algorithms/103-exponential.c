#include "search_algos.h"

/**
 * exponential_search - perform exponential search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	size_t bound = 1;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound,
		       array[bound]);
		bound *= 2;
	}

	size_t low = bound / 2;
	size_t high = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (size_t i = low; i <= high; i++)
		{
			printf(i < high ? "%d, " : "%d\n", array[i]);
		}

		size_t mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
