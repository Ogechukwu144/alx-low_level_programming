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

	for (1 = 0; str[i] != '\0'; i++)

		if (i % 2 == 0)
		{

		} else
		{
			for (n = ((1 - 1) / 2) + 1; str[n] != '\0'; n++)
				_putchar(str[n]);
		} _putchar('\n');
}
