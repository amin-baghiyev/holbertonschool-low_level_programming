#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to cut
 * @accept: suitable characters
 *
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	if (accept[0] == '\0')
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}

	return (NULL);
}
