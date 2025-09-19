#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * shash_table_create - creates a hash table
 * @size: size of hash table
 *
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *tmp;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value), node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key), free(node);
		return (0);
	}
	node->next = ht->array[i], ht->array[i] = node;
	if (ht->shead == NULL)
		ht->shead = node, ht->stail = node;
	else
	{
		tmp = ht->shead;
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, node->key) > 0)
			{
				if (tmp->sprev != NULL)
					tmp->sprev->snext = node;
				node->sprev = tmp->sprev, tmp->sprev = node;
				node->snext = tmp;
				if (tmp == ht->shead)
					ht->shead = node;
				break;
			}
			tmp = tmp->snext;
		}
		if (tmp == NULL)
		{
			ht->stail->snext = node, node->sprev = ht->stail;
			ht->stail = node;
		}
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with the element, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *node;

	if (ht == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	char boolean;

	if (ht == NULL)
		return;
	printf("{");
	boolean = 0;
	node = ht->shead;
	while (node != NULL)
	{
		while (node->next != NULL)
		{
			if (boolean == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (boolean == 0)
				boolean = 1;
		}
		if (boolean == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (boolean == 0)
			boolean = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse order
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	char boolean;

	if (ht == NULL)
		return;
	printf("{");
	boolean = 0;
	node = ht->stail;
	while (node != NULL)
	{
		while (node->next != NULL)
		{
			if (boolean == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (boolean == 0)
				boolean = 1;
		}
		if (boolean == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (boolean == 0)
			boolean = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *next;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next = node->next;
			free(node->key), free(node->value), free(node);
			node = next;
		}
	}
	free(ht->array), free(ht);
}
