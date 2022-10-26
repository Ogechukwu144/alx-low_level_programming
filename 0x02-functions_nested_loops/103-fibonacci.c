#include <stdio.h>

/**
 * main - finds and prints the sum of the
 * even value terms.
 *
 * Return: 0
 */

int main(void)
{
	long int n1, n2, sum, temp, i;

	n1 = 1;
	n2 = 2;
	sum = 0;

	for (i = 0; i < 33; i++)
	{
		if (n1 % 2 == 0 && n1 <= 4000000)
		{
			sum += n1;
		} else if (n1 > 4000000)
		{
			break;
		}
		temp = n1;
		n1 = n2;
		n2 = temp + n1;
	}
	printf("%ld\n", sum);
	return (0);
}
