#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	short i;

	letter = 97;
	i = 0;
	while (letter <= 122 && i <= 9)
	{
		_putchar(letter);
		letter++;
		if (letter == 123)
			_putchar('\n');
		if (letter == 123 && i != 9)
		{
			i++;
			letter = 97;
		}
	}
}
