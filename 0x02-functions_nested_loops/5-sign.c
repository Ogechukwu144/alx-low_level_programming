#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: The number of the sign to be printed
 * Return 1 and print + if n > 0, print 0 if n is zero and -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
