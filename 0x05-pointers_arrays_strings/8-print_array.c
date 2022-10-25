#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of values to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int u;

	for (u = 0; u < n; u++)
	{
		if (u != (n - 1))
			printf("%d, ", a[u]);
		else
			printf("%d", a[u]);
	}
	printf("\n");
}
