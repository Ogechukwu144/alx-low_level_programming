#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: pointer to the allocated memory, if nmemb or size is 0,
 * return NULL. if malloc fails, return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	imsigned int a;
	char *q;

	/* if nmemb or size is 0, return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	q = malloc(nmemb * size);

	if (q == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		q[a] = 0;

	return (q);
}
