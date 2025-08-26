#include "function_pointers.h"

/**
 * print_name - prints a name via callback
 * @name: string to print
 * @f: function to call
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
