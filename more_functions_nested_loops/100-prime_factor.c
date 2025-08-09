#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n, i;

	i = 2;
	n = 612852475143;
	while (n > 1)
	{
		if (n % i == 0)
			n /= i;
		else
			i++;
	}
	printf("%lu\n", i);
	return (0);
}
