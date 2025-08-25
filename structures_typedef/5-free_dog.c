#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - remove memory blocks
 * @d: dog to remove :(
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
