#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: destination
 * @src: source
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (n >= 0)
	{
		*(dest + n) = *(src + n);
		if (*(src + n) == '\0')
			break;
		n++;
	}
	return (dest);
}
