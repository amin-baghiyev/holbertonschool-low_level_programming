#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates length of string
 * @s: string to calculate length
 *
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strdup - copies of the string given as a parameter
 * @str: string to copy
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = malloc(_strlen(str) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);
}
