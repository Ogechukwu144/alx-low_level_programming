#include "stdio.h"

void print_something(void) __attribute__ ((constructor));

/**
 * print_statement - prints a statement before main function
 *
 * Return: Nothing
 */

void print_statement(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
