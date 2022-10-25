#include "main.h"

/**
 * times_table - print 9 times table
 *
 * Return:0
 */

void times_table(void)
{
	int k, l, output;

	for (k = 0; k <= 9; k++)
	{
		_putchar(48);

		for (l = 1; l <= 9; l++)
		{
			output = k * l;

			_putchar(44);
			_putchar(32);

			if (output <= 9)
			{
				_putchar(32);
				_putchar(output + 48);
			}
			else
			{
				_putchar((output / 10) + 48);
				_putchar((output % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
