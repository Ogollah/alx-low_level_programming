#include "search_algos.h"

/**
 * advanced_binary - perform advanced binary search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * binary_search_recursive - helper function for advanced binary search
 * @array: pointer to the first element of the array
 * @left: left index of the search range
 * @right: right index of the search range
 * @value: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int binary_search_recursive(int *array, int left, int right, int value)
{
	if (left > right)
		return (-1);

	int mid = (left + right) / 2;

	printf("Searching in array: ");
	for (int i = left; i <= right; i++)
	{
		printf(i < right ? "%d, " : "%d\n", array[i]);
	}

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return (mid);
		else
			return (binary_search_recursive(array, left, mid - 1,
							value));
	}
	else if (array[mid] < value)
		return (binary_search_recursive(array, mid + 1, right, value));
	else
		return (binary_search_recursive(array, left, mid - 1, value));
}
