#include "main.h"

/**
 * print_square - Prints a square
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int line, row;

	if (size <= 0)
		_putchar('\n');
	
	row = size;
	while (row > 0)
	{
		line = size;
		while (line > 0)
		{
			_putchar('#');
			line--;
		}
		_putchar('\n');
		row--;
	}
}
