#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number;

	number = 48;
	while (number <= 102)
	{
		putchar(number);
		if (number == 57)
			number += 40;
		else
			number++;
	}
	putchar('\n');
	return (0);
}
