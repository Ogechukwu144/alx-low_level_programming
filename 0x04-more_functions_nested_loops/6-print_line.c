#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: the number of times the character _ will be printed
 *
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
