#include "main.h"

/**
 *set_bit - Sets the value of a bit to 1 at a given index.
 *@n: Pointer to Number to set.
 *@index: Position to be set.
 *
 *Return: 1 else -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n |= 1UL << index;
		return (1);
	}
	else
		return (-1);
}
