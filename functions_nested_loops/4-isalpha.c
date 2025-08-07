#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: character to check
 *
 * Return: if c is a letter, lowercase or uppercase 1 otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
