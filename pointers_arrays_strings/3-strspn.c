#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search on
 * @accept: suitable characters
 *
 * Return: the number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	if (accept[0] == '\0')
		return (0);

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				break;
			if (accept[j + 1] == '\0')
				return (i);
		}

	return (i);
}
