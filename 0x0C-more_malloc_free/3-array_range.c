#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: the pointer to the newly created array.
 * If min > max, return NULL. If malloc fails, return NULL.
 */

int *array_range(int min, int max)
{
	int *k;    /* array range */
	int a;    /* signifies integer */

	if (min > max)
		return (NULL);

	k = malloc(sizeof(*k) * ((max - min) + 1));

	if (k == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		k[a] = min;

	return (k);
}
