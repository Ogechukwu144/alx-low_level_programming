#include "main.h"

/**
 * _strncat - Concatenates 2 strings using n bytes from src
 * src does not need to be null terminated.
 * @dest: destination string
 * @src: source string
 * @n: number of n bytes to be concatenated
 *
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len	= 0;
	int i;

	/*len denotes length of destination string*/

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
