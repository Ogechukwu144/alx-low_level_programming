#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int rev = 0;

	/*first find the length of string*/
	while (s[rev] != '\0')
	{
		rev++;
	}

	/*print in reverse*/
	for (rev = rev - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}

	_putchar('\n');
}
