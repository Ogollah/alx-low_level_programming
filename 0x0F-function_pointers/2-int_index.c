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
	unsigned int i = 0;

	if (array != NULL && size <= 0 && cmp != NULL)
	{
		while (i <= size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	else
	{
		return (-1);
	}
}
