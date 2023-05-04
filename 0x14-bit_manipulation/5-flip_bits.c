#include "main.h"

/**
 * flip_bits - Gets the number of bits you would need to flip to get from
 *             one number to another.
 * @n: Initial number.
 * @m: Number to be flipped to.
 *
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, i;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (((n ^ m) >> i) & 1)
			count++;
	}
	return (count);
}
