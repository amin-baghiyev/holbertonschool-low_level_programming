#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j != i && j % 2 == 0)
				printf(" ");
			if (j >= size)
				printf("  ");
			else
				printf("%02x", b[j]);
		}
		printf(" ");
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
				break;
			if (b[j] <= 31 || b[j] >= 127)
				printf(".");
			else
				printf("%c", b[j]);
		}
		printf("\n");
	}
}
