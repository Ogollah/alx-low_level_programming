#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: the size of the table
 * Return: The table else NULL on fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	if (size == 0)
		return (NULL);

	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
