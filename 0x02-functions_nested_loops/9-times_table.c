#include "main.h"

/**
 * time_table - print 9 times table
 *
 * Return:0
 */

void times_table(void)
{
	int k, l, output;

	for (k = 0; k <= 9; k++)
	{
		for (l = 0; l <= 9; l++)
		{
			output = k + l;

			if (output < 10 && l > 0)
			{
				_putchar(' ');
			}
			if (output >= 10)
			{
				_putchar(output / 10 + 48);
				_putchar(output % 10 + 48);
				if (l < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			} else
			{
				_putchar(output + 48);
				if (l < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
