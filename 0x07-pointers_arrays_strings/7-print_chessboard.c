#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int l, j;

	l = 0;
	while (l < 8) /*number repetitions*/
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[l][j]);
			j++;
		}
		_putchar('\n');
		l++;
	}
}
