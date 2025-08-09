#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long curr, prev, f_curr, f_prev, s_curr, s_prev;
	unsigned short i;

	i = 2;
	prev = 1;
	curr = 2;
	printf("%ld, ", prev);
	printf("%ld, ", curr);
	while (i < 91)
	{
		curr = curr + prev;
		prev = curr - prev;
		printf("%ld, ", curr);
		i++;
	}
	f_curr = curr / 10000000000;
	s_curr = curr % 10000000000;
	f_prev = prev / 10000000000;
	s_prev = prev % 10000000000;
	while (i < 98)
	{
		f_curr = f_prev + f_curr;
		s_curr = s_prev + s_curr;
		f_prev = f_curr - f_prev;
		s_prev = s_curr - s_prev;
		if (s_curr > 10000000000)
		{
			f_curr += 1;
			s_curr %= 10000000000;
		}
		printf("%ld%ld", f_curr, s_curr);
		if (i != 97)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
