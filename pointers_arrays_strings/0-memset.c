#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to buffer that will be filled
 * @b: constant byte for fill
 * @n: size of buffer
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		n--;
		s[n] = b;
	}
	return (s);
}
