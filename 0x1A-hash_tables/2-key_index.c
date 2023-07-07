#include "hash_tables.h"

/**
* key_index - Gives index of a key
* @key: Key
* @size: Array size
*
* Return: Index of a key.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
