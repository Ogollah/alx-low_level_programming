#include "main.h"

/**
 *get_endianness- Get the endianness object
 *
 *Return: 0 if big endian else 1.
 */
int get_endianness(void)
{
	endian.i = 1;
	int res;

	res = (endian.c[0] == 1) ? 1 : 0;
	return (res);
}
