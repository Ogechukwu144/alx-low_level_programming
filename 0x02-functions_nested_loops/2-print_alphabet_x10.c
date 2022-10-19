#include "main.h"

/**
 * print_alphabet__x10 - print 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
