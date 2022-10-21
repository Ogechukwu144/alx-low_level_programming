#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int u, t;

		for (u = 0; u < n; u++)
		{
			for (t = 0; t < n; t++)
			{
				if (t == u)
					_putchar('\\');
				else if (t < u)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
