#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: element of list
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("[%d] %s\n",
				h->str == NULL ? 0 : h->len,
				h->str == NULL ? "(nil)" : h->str);
		h = h->next;
	}
	return (i);
}
