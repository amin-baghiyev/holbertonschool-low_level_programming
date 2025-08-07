#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: number to get the last digit
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	_putchar('0' + (n < 0 ? -1 * n % 10 : n % 10));
	return (n < 0 ? -1 * n % 10 : n % 10);
}
