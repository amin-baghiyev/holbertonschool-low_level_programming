#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to will be concatenate
 * @src: string to cut
 * @n: count of bytes
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char flag;

	i = 0;
	j = 0;
	flag = '0';
	while ((src[j] != '\0' || dest[i] != '\0') && j < n)
	{
		if (dest[i] == '\0')
			flag = '1';
		if (flag == '1')
		{
			dest[i] = src[j];
			j++;
		}
		i++;
	}
	return (dest);
}
