#include "main.h"

/**
 * string_toupper - changes all letters of a string to uppercase
 * @s: string that will be uppercase
 *
 * Return: pointer to s
 */
char *string_toupper(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
