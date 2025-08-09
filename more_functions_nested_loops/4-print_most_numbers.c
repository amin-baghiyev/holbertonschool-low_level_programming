#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char number;

	number = 48;
	while (number <= 57)
	{
		if (number != 50 && number != 52)
			_putchar(number);
		number++;
	}
	_putchar('\n');
}
