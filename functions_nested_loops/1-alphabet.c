#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	letter = 97;
	while (letter <= 122)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
