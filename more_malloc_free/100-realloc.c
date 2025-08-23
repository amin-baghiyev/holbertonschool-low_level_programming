#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: memory block to copy
 * @old_size: size of ptr
 * @new_size: size of new memory block
 *
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, min_size;
	char *old, *new;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	old = (char *) ptr, new = (char *) new_ptr;
	min_size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < min_size; i++)
		new[i] = old[i];
	free(ptr);

	return (new_ptr);
}
