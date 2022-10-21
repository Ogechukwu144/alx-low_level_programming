#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9, exempting 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		if (m != 2 && m != 4)
		{
			_putchar(m + '0');
		}
	}
	_putchar('\n');
}
