#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	char f_number, s_number, i;

	i = 0;
	f_number = 48;
	s_number = 48;
	while (i <= 9)
	{
		if (s_number == 49)
			_putchar(s_number);
		_putchar(f_number);
		if (f_number == 57)
		{
			s_number++;
			f_number = 47;
		}
		f_number++;
		if (f_number == 53 && s_number == 49)
		{
			i++;
			f_number = 48;
			s_number = 48;
			_putchar('\n');
		}
	}
}
