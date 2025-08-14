#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix to compute
 * @size: size of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int diag_1, diag_2;

	diag_1 = diag_2 = 0;
	for (i = 0; i != size; i++)
	{
		diag_1 += a[i * size + i];
		diag_2 += a[i * size + size - 1 - i];
	}
	printf("%ld, %ld\n", diag_1, diag_2);
}
