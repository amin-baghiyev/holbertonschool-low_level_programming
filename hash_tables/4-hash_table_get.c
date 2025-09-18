#include "hash_tables.h"
#include <stddef.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with the element, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	i = key_index((const unsigned char *)key, ht->size);
	return (ht->array[i] != NULL ? ht->array[i]->value : NULL);
}
