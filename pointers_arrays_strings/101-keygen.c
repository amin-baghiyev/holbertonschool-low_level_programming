#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void) {
	unsigned short sum, c;

	sum = 0;
	srand(time(NULL));
	while (sum < 2772)
	{
		c = 33 + rand() % 93;
		if (sum + c > 2772)
			c = 2772 - sum;
		sum += c;
		printf("%c", c);
	}
	return (0);
}
