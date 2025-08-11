#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	unsigned long length;

	length = 0;
	while (s[length] != '\0')
		length++;

	while (length > 0)
	{
		length--;
		_putchar(s[length]);
	}
	_putchar('\n');
}
