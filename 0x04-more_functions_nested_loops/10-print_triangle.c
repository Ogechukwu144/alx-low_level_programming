nclude "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return:0
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int s, j;

		for (s = 1; s <= size; s++)
		{
			for (j = s; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= s; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
