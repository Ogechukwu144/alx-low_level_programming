#include "main.h"

/**
 * print_alphabet__x10 - print 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int num;
	char az;

	for (num = 0; num <= 9; num++)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n');
	}
}
