#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars (input pointer)
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
		int j;
		int sum1, sum2;

		sum1 = 0;
		sum2 = 0;

		j = 0;
		while (j < size) /*iteration */
		{
			sum1 = sum1 + *(a + j * size + j);
			sum2 = sum2 + *(a + j * size + size - j - 1);

			j++;
		}

		printf("%d, %d\n", sum1, sum2);
}
