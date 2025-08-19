#include "main.h"

/**
 * _strlen - recursively compute length of string
 * @s: string to compute length
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen(++s) + 1);
}

/**
 * compute - checks for if string is palindrome or not
 * @s: string to compute
 * @i: iterator
 * @j: reverse iterator
 *
 * Return: 1 if string is palindrome otherwise 0
 */
int compute(char *s, int i, int j)
{
	if (i > j)
		return (1);
	if (*(s + i) == *(s + j))
		return (compute(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - return string is palindrome or not
 * @s: string to check
 *
 * Return: 1 if string is palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compute(s, 0, _strlen(s) - 1));
}
