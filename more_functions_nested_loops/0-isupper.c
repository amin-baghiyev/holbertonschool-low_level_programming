#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: character to check
 *
 * Return: if c is uppercase 1 otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
