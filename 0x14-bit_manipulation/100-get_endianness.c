#include "main.h"

/**
 *get_endianness- Get the endianness.
 *
 *Return: 0 if big endian else 1.
 */
int get_endianness(void)
{
	int i = 1;
	int res;

	res = (*((char *) &i) == 1) ? 1 : 0;
	return (res);
}
