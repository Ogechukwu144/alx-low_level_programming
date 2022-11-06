#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @n: first number of bytes of the memory to be filled
 * @s: pointer block of memory to fill
 * @b: character to fill s
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(s + j) = b;
	}

	return (s);
}
