#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned short row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
			printf("%c", a[row][column]);
		printf("\n");
	}
}
