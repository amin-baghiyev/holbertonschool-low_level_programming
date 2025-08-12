#include "main.h"

/**
 * _strncpy - copies string pointed to by src to buffer pointed to by dest
 * @dest: buffer to be written
 * @src: string to copy
 * @n: count of bytes
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (src[i] != '\0' && i < n); i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
