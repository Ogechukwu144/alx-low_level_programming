#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initialises it with a specific char.
 * @c: char
 * @size: size of array
 * Return: pointerter to the array, NULL on error
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *q;

	if (size == 0)
	{
		return (NULL);
	}
	q = malloc(sizeof(char c) * size);
	if (q == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(q + i) = c;
	}
	return (q);
}
