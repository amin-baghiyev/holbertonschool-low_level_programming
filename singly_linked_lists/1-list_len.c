#include "lists.h"

/**
 * list_len - computes the number of elements in a linked list
 * @h: linked list
 *
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
