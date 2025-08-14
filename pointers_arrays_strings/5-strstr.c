#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to cut
 * @needle: suitable word
 *
 * Return: pointer to haystack
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	unsigned char flag;

	if (needle[0] == '\0')
		return (NULL);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
				flag = 1;
			else
				flag = 0;
		}
		if (flag == 1)
			return (haystack + i - j + 1);
	}

	return (NULL);
}
