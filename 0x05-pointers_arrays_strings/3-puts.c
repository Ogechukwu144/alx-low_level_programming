#include "main.h"

/**
 *  _puts - prints a string,follwed by a new line to sdout.
 *  @str: string to be printed
 *
 *  Return: Nothing
 */

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
