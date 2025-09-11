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
	if (current == NULL)
	{
		*h = element, element->next = NULL, element->prev = NULL;
		return (element);
	}
	for (i = 0; current != NULL; i++)
	{
		if (i == idx)
		{
			element->prev = current->prev, element->next = current;
			if (current->prev != NULL)
				current->prev->next = element;
			current->prev = element;
			if (idx == 0)
				*h = element;
			return (element);
		}
		if (current->next == NULL && i + 1 == idx)
		{
			element->next = NULL, element->prev = current;
			current->next = element;
			return (element);
		}
		current = current->next;
	}
	free(element);
	return (NULL);
}
