#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of doubly linked list
 * @head: doubly linked list
 * @n: integer
 *
 * Return: address to new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *element;

	element = malloc(sizeof(dlistint_t));
	if (element == NULL)
		return (NULL);
	element->n = n;
	element->prev = NULL;
	element->next = *head;
	if (*head != NULL)
		(*head)->prev = element;
	*head = element;
	return (element);
}
