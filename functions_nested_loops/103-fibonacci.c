#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int curr, prev, sum;

	sum = 2;
	prev = 1;
	curr = 2;
	while (curr < 4000000)
	{
		curr = curr + prev;
		prev = curr - prev;
		if (curr % 2 == 0)
			sum += curr;
	}
	printf("%d\n", sum);
	return (0);
}
