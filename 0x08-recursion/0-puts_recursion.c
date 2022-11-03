#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer to string
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0)
	{
		_puts_recursion(s + 1);
		_putchar("%c", *s);
	}
}

int main(void)
{
	char s[];
	_puts_recursion(s);
	_putchar('\n');

	return (0);
}
