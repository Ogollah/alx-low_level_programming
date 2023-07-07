#include "hash_tables.h"

/**
 * hash_table_get - Get a value
 * @ht: Hash table to get value from
 * @key: Key to the value
 *
 * Return: Aalue else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
