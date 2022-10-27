#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: represents the n times table
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k  = i * j;

				if (k < 10 && j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				} else if (k >= 10 && j > 0 && k < 100)
				{
					_putchar(' ');
				}
				if (k < 10)
				{
					_putchar((k % 10) + 48);
				} else if (k >= 10 && k < 100)
				{
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
				} else if (k >= 100)
				{
					_putchar((k / 100) + 48);
					_putchar(((k / 10) % 10) + 48);
					_putchar((k % 10) + 48);
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
