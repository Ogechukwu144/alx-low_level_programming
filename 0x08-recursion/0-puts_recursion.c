#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer to string
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0') /*if s != null terminator keep going*/
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}

{
	char s[] = "Puts with recursion";

	_puts_recursion(s);
	_putchar('\n');

	return (0);
}
