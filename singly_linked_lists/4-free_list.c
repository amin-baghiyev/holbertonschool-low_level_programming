#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees linked list
 * @head: linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		free(head->str);
		current = head;
		head = head->next;
		free(current);
	}
}
