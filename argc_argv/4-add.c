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
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	while (--argc)
	{
		argv++;
		if ((*argv)[0] != '0' && atoi(*argv) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(*argv);
	}
	printf("%d\n", sum);
	return (0);
}
