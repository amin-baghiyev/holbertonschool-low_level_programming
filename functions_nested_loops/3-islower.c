#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: character to check
 *
 * Return: if c is lowercase 1 otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
