#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array integer
 * @n: number of values to be printed
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int u;

	for (u = 0; u < n; u++)
	{
		printf("%d", a[u]);
		if (u != n - 1)
			printf(", ");
	}

	printf("\n");
}
