#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int line, row, i;

	if (size <= 0)
		_putchar('\n');

	i = 1;
	row = size;
	while (row > 0)
	{
		line = size - i;
		while (line > 0)
		{
			_putchar(' ');
			line--;
		}
		line = i;
		while (line > 0)
		{
			_putchar('#');
			line--;
		}
		_putchar('\n');
		i++;
		row--;
	}
}
