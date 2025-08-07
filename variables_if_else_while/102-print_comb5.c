#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short f_ones, f_tens, s_ones, s_tens;

	f_ones = 0;
	f_tens = 0;
	s_ones = 1;
	s_tens = 0;
	while (f_ones <= 9 && f_tens <= 9)
	{
		putchar(48 + f_tens);
		putchar(48 + f_ones);
		putchar(' ');
		putchar(48 + s_tens);
		putchar(48 + s_ones);
		if (f_ones == 8 && f_tens == 9)
			break;
		putchar(',');
		putchar(' ');
		if (s_ones == 9 && s_tens == 9)
		{
			f_ones++;
			s_ones = f_ones;
			s_tens = f_tens;
		}
		if (s_ones == 9 && s_tens != 9)
		{
			s_ones = -1;
			s_tens++;
		}
		if (f_ones == 10)
		{
			f_tens++;
			s_tens = f_tens;
			s_ones = 0;
			f_ones = 0;
		}
		s_ones++;
	}
	putchar('\n');
	return (0);
}
