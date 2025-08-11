#include "main.h"

/**
 * _strlen - compute the length of a string
 * @s: string to get length
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	unsigned long length;

	length = 0;
	while (s[length] != '\0')
		length++;

	return (length);
}
