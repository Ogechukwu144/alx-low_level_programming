#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string parameter
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i, n;

	i = 0;

	while (str[i])
	{
		i++;
	}
	i--;
	n = i / 2;
	i = 0;
	while (str[i])
	{
		if (i > n)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
