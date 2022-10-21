#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return:0
 */

void print_triangle(int size)
{
	int i, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			k = size - 1;

			while (k >= 0)
			{
				if (k <= i)
				{
					_putchar('#');
				} else
				{
					_putchar(' ');
				}
				k--;
			}
			if (i < (size - 1))
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
