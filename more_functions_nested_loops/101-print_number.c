#include "main.h"

/**
 * power - compute result of raising a base to an exponent
 * @base: base number
 * @exponent: exponent to raise base to
 *
 * Return: value of base raised to the power of exponent
 */
int power(int base, int exponent)
{
	int result, i;

	result = 1;
	for (i = 0; i < exponent; i++)
		result *= base;
	return (result);
}

/**
 * print_number - Prints an integer
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int c, i;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	c = n;
	i = -1;

	while (n != 0)
	{
		n /= 10;
		i++;
	}

	do {
		_putchar(48 +  c / power(10, i));
		c %= power(10, i);
		i--;
	} while (i >= 0);
}
