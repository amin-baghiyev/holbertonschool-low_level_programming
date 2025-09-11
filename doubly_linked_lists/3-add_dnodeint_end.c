#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of doubly linked list
 * @head: doubly linked list
 * @n: integer
 *
 * Return: address to new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *element, *h;

	element = malloc(sizeof(dlistint_t));
	if (element == NULL)
		return (NULL);
	element->n = n;
	element->next = NULL;
	if (*head == NULL)
		element->prev = NULL, *head = element;
	else
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;
		element->prev = h;
		h->next = element;
	}
	return (element);
}
