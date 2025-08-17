#include "main.h"

/**
 * check - check number recursively
 * @n: number for check
 * @m: count of recursion
 *
 * Return: if the input integer is a prime number 1, otherwise 0
 */
int check(int n, int m)
{
	if (n % m == 0)
		return (0);
	if (n / 2 == m)
		return (1);
	return (check(n, m + 1));
}

/**
 * is_prime_number - checks if number is prime or not
 * @n: integer to check
 *
 * Return: if the input integer is a prime number 1, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, 2));
}
