#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short ones, tens, hundreds;

	ones = 2;
	tens = 1;
	hundreds = 0;
	while (ones <= 9 && tens <= 8 && hundreds <= 7)
	{
		putchar(48 + hundreds);
		putchar(48 + tens);
		putchar(48 + ones);
		if (ones == 9 && tens == 8 && hundreds == 7)
			break;
		putchar(',');
		putchar(' ');
		if (tens == 8)
		{
			tens = hundreds + 1;
			hundreds++;
		}
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
