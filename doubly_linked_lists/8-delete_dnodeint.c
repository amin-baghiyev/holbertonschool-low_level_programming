#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes node at nth index of a doubly linked list
 * @head: doubly linked list
 * @index: index of node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	current = *head;
	if (current == NULL)
		return (-1);
	for (i = 0; current != NULL; i++)
	{
		if (i == index)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			if (index == 0)
				*head = current->next;
			free(current);
			return (1);
		}
		current = current->next;
	}
	return (-1);
}
