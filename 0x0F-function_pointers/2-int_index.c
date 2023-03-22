#include "function_pointers.h"

/**
 *int_index - Searches for an integer.
 *@array: Array
 *@size: Aray size.
 *@cmp: Ponter to func that compare values
 *
 *Return: The first index of the first element
 *         for which the @cmp function return 0 else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
}
