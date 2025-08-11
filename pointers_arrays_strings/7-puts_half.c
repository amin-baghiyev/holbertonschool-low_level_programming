#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	unsigned long length;

	length = 0;
	while (str[length] != '\0')
		length++;

	length = (length + 1) / 2;
	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
