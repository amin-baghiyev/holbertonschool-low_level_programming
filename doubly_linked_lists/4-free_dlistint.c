#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees doubly linked list
 * @head: doubly linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
