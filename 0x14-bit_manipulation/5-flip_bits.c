#include "main.h"

/**
 *flip_bits - Gets the number of bits you would
 *            need to flip to get from one number to another.
 *@n: Initial number.
 *@m: Number to be flipped to.
 *
 *Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int n_xor_m = n ^ m;

	for (i = 0; n_xor_m != 0; i++)
	{
		n_xor_m &= (n_xor_m - 1);
	}
	return (i);
}
