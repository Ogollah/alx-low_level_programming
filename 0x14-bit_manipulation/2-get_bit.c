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
	unsigned long int size = (sizeof(unsigned long int) * 8);

	return ((index >= size) ? -1 : ((n >> index) & 1));
}
