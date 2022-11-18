#include "function_pointers.h"

/**
 * print_name - Function to print name
 * @name: name to print
 * @f: function pointer
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
