#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to cut
 * @c: character to find
 *
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
