#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
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
	element->len = strlen(str);
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
