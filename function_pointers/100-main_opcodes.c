#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count of argv
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int number_of_bytes, i;
	unsigned char *bytes;

	if (argc != 2)
		printf("Error\n"), exit(1);

	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes < 0)
		printf("Error\n"), exit(2);

	bytes = (unsigned char *) main;
	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", bytes[i]);
		if (i != number_of_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
