#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: count of lines
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	i = 0;
	j = 0;
	while (n > i)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
}
