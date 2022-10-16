#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0(Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (b != 57 || a != 56)
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
