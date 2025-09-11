#include <stdio.h>

void genesis(void) __attribute__((constructor));

/**
 * genesis - the function that starts before main
 *
 * Return: void
 */
void genesis(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
