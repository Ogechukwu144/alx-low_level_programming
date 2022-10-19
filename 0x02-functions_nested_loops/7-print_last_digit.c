#include "main.h"

/**
 * print_last_digit - -print last digit
 * @n: parameter to use
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	if (n % 10 < 0)
	{
		_putchar(((n % 10) * -(n)) + 48);
		return ((n % 10) * -(n));
	}
	_putchar((n % 10) + 48);
	return (n % 10);
}
