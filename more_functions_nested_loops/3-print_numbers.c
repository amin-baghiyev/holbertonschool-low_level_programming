#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char number;

	number = 48;
	while (number <= 57)
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
