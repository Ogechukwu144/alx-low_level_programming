#include <stdio.h>

/**
 * main - prints the add of the Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int n1, n2, temp, i;

	n1 = 1;
	n2 = 2;

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
		{
			printf("%lu, ", n1);
		} else
		{
			printf("%lu", n1);
		}
		temp = n1;
		n1 = n2;
		n2 = temp + n1;
	}
	printf("\n");
	return (0);
}
