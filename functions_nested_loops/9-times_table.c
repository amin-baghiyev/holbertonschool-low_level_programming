#include "main.h"

/**
 * times_table - Prints times table
 *
 * Return: void
 */
void times_table(void)
{
	unsigned short f_factor, s_factor, product;

	f_factor = 0;
	s_factor = 0;
	product = 0;
	while (f_factor != 10)
	{
		product = f_factor * s_factor;
		if (s_factor > 0)
			_putchar(' ');
		if (s_factor > 0 && product <= 9)
			_putchar(' ');
		else if (product > 9)
			_putchar(48 + (product / 10));
		_putchar(48 + (product % 10));

		s_factor++;
		if (s_factor == 10)
		{
			s_factor = 0;
			f_factor++;
			_putchar('\n');
		}
		else
			_putchar(',');
	}
}
