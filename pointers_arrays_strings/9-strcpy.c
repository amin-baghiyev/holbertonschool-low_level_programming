#include "main.h"

/**
 * _strcpy - copies string pointed to by src to buffer pointed to by dest
 * @dest: buffet to be written
 * @src: string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	unsigned long i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	dest = src;

	return (dest);
}
