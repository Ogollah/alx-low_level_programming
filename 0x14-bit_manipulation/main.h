#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 *union endian - Union that can hold an int and array of char.
 *@i: Integer value
 *@c: Array of characters.
 *
 *Description: Union containing @i int and @c array
 *             with same size as the integer to help determine endianness.
 */
union endian
{
	int i;
	char c[sizeof(int)];
} endian;

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
