#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: area that will be overwritten
 * @src: area that will be copied
 * @n: count of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		n--;
		dest[n] = src[n];
	}
	return (dest);
}
