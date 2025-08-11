#include <stdlib.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	unsigned long length, i;
	char *c;

	length = 0;
	while (s[length] != '\0')
		length++;

	c = malloc(length + 1);

	for (i = 0; i < length; i++)
		c[i] = s[i];
	c[length] = '\0';

	i = 0;
	while (length > 0)
	{
		length--;
		s[length] = c[i];
		i++;
	}

	free(c);
}
