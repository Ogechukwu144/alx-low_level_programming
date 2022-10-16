#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0(Success)
 */
int main(void)
{
	int p, g;

	for (p = 0; p < 99; p++)
	{
		for (g = 0; g <= 99; g++)
		{
			if (p != g && p < g)
			{
				putchar(p / 10 + 48);
				putchar(p % 10 + 48);
				putchar(' ');
				putchar(g / 10 + 48);
				putchar(g % 10 + 48);
				if (p != 98 || g != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
