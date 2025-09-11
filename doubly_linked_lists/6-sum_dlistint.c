#include "lists.h"
#include <stddef.h>

/**
 * sum_dlistint - computes the sum of all the data (n) of a doubly linked list
 * @head: doubly linked list
 *
 * Return: the sum of all the data (n) of a doubly linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
		sum += head->n, head = head->next;
	return (sum);
}
