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
	hash_node_t *node;
	char boolean;

	if (ht == NULL)
		return;
	printf("{");
	boolean = 0;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		node = ht->array[i];
		while (node != NULL)
		{
			if (boolean == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (boolean == 0)
				boolean = 1;
		}
	}
	printf("}\n");
}
