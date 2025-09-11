#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint -  prints all the elements of a doubly linked list
 * @h: doubly linked list
 *
 * Return: length of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		printf("%d\n", h->n), h = h->next;
	return (i);
}
