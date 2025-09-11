#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - computes the number of elements in a doubly linked list
 * @h: doubly linked list
 *
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
