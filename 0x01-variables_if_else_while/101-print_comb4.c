#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0(Success)
 */
int main(void)
{
	int j, f, k;

	for (j = 48; j < 57; j++)
	{
		for (f = 48; f < 57; f++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (f > j && k > f)
				{
					putchar(j);
					putchar(f);
					putchar(k);
					if (j != 55 || f != 56 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
