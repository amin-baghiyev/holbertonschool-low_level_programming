#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string that will be capitalize
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	unsigned int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	i = 1;
	while (s[i] != '\0')
	{
		if ((s[i] >= 97 && s[i] <= 122) &&
				(s[i - 1] == ' ' || s[i - 1] == '	' || s[i - 1] == '\n' ||
				 s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
				 s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
				 s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'))
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
