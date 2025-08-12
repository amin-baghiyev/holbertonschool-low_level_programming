#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	unsigned int i;
	unsigned short j;
	char letters[] = { 'o', 'l', 0, 'e', 'a', 0, 0, 't'};

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j <= 7; j++)
			if (s[i] != 0 && (s[i] == letters[j] || s[i] + 32 == letters[j]))
				s[i] = j + 48;
		i++;
	}
	return (s);
}
