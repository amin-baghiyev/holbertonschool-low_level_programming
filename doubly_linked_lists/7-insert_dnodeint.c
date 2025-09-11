#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: doubly linked list
 * @idx: position of new node
 * @n: integer
 *
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *element, *current;

	element = malloc(sizeof(dlistint_t));
	if (element == NULL)
		return (NULL);
	element->n = n;
	current = *h;
	for (i = 0; current != NULL; i++)
	{
		if (i + 1 == idx)
		{
			element->prev = current;
			element->next = current->next;
			current->next->prev = element;
			current->next = element;
			break;
		}
		current = current->next;
	}
	return (element);
}
