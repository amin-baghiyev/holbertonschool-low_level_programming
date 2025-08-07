#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short ones, tens;

	ones = 1;
	tens = 0;
	while (ones <= 9 && tens <= 8)
	{
		putchar(48 + tens);
		putchar(48 + ones);
		if (ones == 9 && tens == 8)
			break;
		putchar(',');
		putchar(' ');
		if (ones == 9)
		{
			ones = tens + 1;
			tens++;
		}
		ones++;
	}
	putchar('\n');
	return (0);
}
