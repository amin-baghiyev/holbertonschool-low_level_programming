#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long curr, prev;
	unsigned short i;

	i = 0;
	prev = 1;
	curr = 2;
	printf("%ld, ", prev);
	printf("%ld, ", curr);
	while (i < 48)
	{
		curr = curr + prev;
		prev = curr - prev;
		printf("%ld", curr);
		if (i != 47)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
