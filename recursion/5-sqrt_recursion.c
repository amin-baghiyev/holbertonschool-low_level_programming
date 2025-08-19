#include "main.h"

/**
 * compute - compute square root of a number recursively
 * @n: number to calculate square root
 * @i: iterator
 *
 * Return: natural square root of n
 */
int compute(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (compute(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate square root
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (compute(n, 1));
}
