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
	return ((index >= sizeof(unsigned long int) * 8) ? -1 : ((n >> index) & 1));
}
