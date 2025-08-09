#include "main.h"

/**
 * _isdigit - Checks for digit character
 * @c: character to check
 *
 * Return: if c is a digit 1 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
