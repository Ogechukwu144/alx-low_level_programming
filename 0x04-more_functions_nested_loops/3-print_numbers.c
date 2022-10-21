#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
