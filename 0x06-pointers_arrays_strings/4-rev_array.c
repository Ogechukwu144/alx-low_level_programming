#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: pointer to array.
 * @n: number of elements of an array.
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int temp, l;

	n = n - 1;
	l = 0;
	while (l <= n)
	{
		temp = a[l];
		a[l++] = a[n];
		a[n--] = temp;
	}
}
