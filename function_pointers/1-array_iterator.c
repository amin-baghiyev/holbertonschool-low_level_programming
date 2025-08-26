#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes function that prints elements of array
 * @array: pointer to memory block
 * @size: size of memory block
 * @action: pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
