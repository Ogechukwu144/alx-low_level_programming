#include "main.h"
#include <stdlib.h>

/**
 * malloc-checked - allocates memory using malloc
 * @b: bytes
 *
 * Return: pointer to the allocated memory.
 * If malloc fails, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
