#include "main.h"

/**
 *clear_bit - Sets the value of a bit to 0 at a given index.
 *@n: Pointer to the Number where bit is to be set to 0.
 *@index: Position to be set to 0.
 *
 *Return: 1 else -1;
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= ~(1UL << index);
		return (1);
	}
	else
		return (-1);
}
