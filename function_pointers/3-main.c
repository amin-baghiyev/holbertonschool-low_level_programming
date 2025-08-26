#include "3-calc.h"
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
	int num1, num2;
	int (*op)(int, int);

	if (argc != 4)
		printf("Error\n"), exit(98);

	num1 = atoi(argv[1]), num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op == NULL)
		printf("Error\n"), exit(99);

	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && num2 == 0)
		printf("Error\n"), exit(100);

	printf("%d\n", op(num1, num2));
	return (0);
}
