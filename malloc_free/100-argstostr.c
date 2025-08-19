#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
 * argstostr - concatenates all the arguments of your program
 * @ac: count of av
 * @av: arguments
 *
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int total, i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	total = 1;
	for (i = 0; i < ac; i++)
		total += (_strlen(*(av + i)) + 1);

	str = malloc(total);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
