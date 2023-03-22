#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a
 *                  parameter on each element of an array.
 * @array: Array
 * @size: Size of the array elements
 * @action: Pointer to be printed in regular or hex
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
