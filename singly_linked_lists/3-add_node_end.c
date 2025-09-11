#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - computes length of string
 * @str: string
 *
 * Return: length of str
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;
	return (i);
}

/**
 * add_node_end - adds a new node at the end of linked list
 * @head: linked list
 * @str: string
 *
 * Return: address to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *element, *h;

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);
	element->str = strdup(str);
	if (element->str == NULL)
	{
		free(element);
		return (NULL);
	}
	element->len = _strlen(str);
	element->next = NULL;
	if (*head == NULL)
		*head = element;
	else
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;
		h->next = element;
	}
	return (element);
}
