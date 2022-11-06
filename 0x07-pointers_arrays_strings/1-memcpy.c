#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: number of bytes of the memory
 * @src: memory area of source of data
 * @dest: buffer where content is to be copied to
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
