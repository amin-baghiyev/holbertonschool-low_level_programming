#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	char boolean;

	if (ht == NULL)
		return;
	printf("{");
	boolean = 0;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (boolean == 1)
			printf(", ");
		printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		if (boolean == 0)
			boolean = 1;
	}
	printf("}\n");
}
