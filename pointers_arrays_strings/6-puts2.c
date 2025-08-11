#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with first
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	unsigned long i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
