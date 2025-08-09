#include "main.h"

/**
 * print_times_table - Prints n times table
 * @n: size of the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	unsigned short f_factor, s_factor, product;

	if (n < 0 || n > 15)
		return;

	f_factor = 0;
	s_factor = 0;
	product = 0;
	while (f_factor <= n)
	{
		product = f_factor * s_factor;
		if (s_factor > 0)
			_putchar(' ');
		if (s_factor > 0 && product <= 9)
		{
			_putchar(' ');
			_putchar(' ');
		}
		else if (product >= 100)
		{
			_putchar(48 + (product / 100));
			_putchar(48 + (product % 100 / 10));
		}
		else if (product > 9 && product < 100)
		{
			_putchar(' ');
			_putchar(48 + (product % 100 / 10));
		}
		_putchar(48 + product % 10);

		s_factor++;
		if (s_factor == n + 1)
		{
			s_factor = 0;
			f_factor++;
			_putchar('\n');
		}
		else
			_putchar(',');
	}
}
