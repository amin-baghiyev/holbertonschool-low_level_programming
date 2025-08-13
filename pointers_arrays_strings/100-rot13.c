#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: pointer to s
 */
char *rot13(char *s)
{
	unsigned long i, j;
	char org;

	i = 0;
	while (s[i] != '\0')
	{
		org = s[i];
		j = 0;
		while (j < 13 && ((org >= 65 && org <= 90) || (org >= 97 && org <= 122)))
		{
			s[i] += 1;
			if (s[i] == 91 || s[i] == 123)
				s[i] -= 26;
			j++;
		}
		i++;
	}
	return (s);
}
