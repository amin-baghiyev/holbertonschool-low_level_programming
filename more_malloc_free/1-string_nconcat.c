#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: count of s2
 *
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		j++;
	for (i = 0; i < n && s2[i] != '\0'; i++)
		j++;

	s = malloc(sizeof(char) * (j + 1));
	if (s == NULL)
		return (NULL);
	s[j] = '\0';

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
		s[i++] = s2[j];

	return (s);
}
