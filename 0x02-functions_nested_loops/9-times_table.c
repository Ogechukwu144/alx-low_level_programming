#include "main.h"

/**
 * times_table - print the 9 times table
 * Return:0
 */

void times_table(void)
{
	int na, ba, outp;

	for (na = 0; na <= 9; na++)
	{
		_putchar(0);

		for (ba = 1; ba <= 9; ba++)
		{
			_putchar(',');
			_putchar(' ');

			outp = na * ba;

			if (outp <= 9)
				_putchar(' ');
			else
				_putchar((outp / 10) + '0');

			_putchar((outp % 10) + '0');
		}
		_putchar('\n');
	}
}
