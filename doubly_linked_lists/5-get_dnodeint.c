#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - finds the nth node of a doubly linked list
 * @head: doubly linked list
 * @index: index of element
 *
 * Return: pointer to the nth node of a doubly linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
		head = head->next;
	return (head);
}
