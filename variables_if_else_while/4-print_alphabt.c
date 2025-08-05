#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 96;
	while (letter < 122)
	{
		letter++;
		if (letter == 101 || letter == 113)
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
