#include "main.h"

/**
 *get_bit - Get bit at a given position.
 *@n: Number to conver to binary.
 *@index: Bit index to return
 *
 *Return: Bit value else -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
