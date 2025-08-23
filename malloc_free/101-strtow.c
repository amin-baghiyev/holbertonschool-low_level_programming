#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to splitting
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	unsigned long i, length, wc;
	char **words;

	wc = 0;
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			wc++;
	if (str == NULL || *str == '\0' || wc == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);
	words[wc] = NULL, wc = 0, length = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			length++;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			words[wc] = malloc(sizeof(char) * length);
			if (words[wc] == NULL)
			{
				while (wc--)
					free(words[wc]);
				free(words);
				return (NULL);
			}
			length = 1, wc++;
		}
	}
	wc = length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			words[wc][length++] = str[i];
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words[wc++][length] = '\0', length = 0;
	}
	return (words);
}
