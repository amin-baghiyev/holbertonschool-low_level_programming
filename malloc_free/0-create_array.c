#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes it with specific char
 * @size: size of memory block
 * @c: char to fill memory block
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(c));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size * sizeof(c); i++)
		ptr[i] = c;
	return (ptr);
}
