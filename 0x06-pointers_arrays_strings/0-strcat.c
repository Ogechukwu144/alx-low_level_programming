#include "main.h"

/**
 * _strcat - concatenating two strings
 * @src: source string
 * @dest: destination string
 *
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a])
	{
		a++;
	}
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (&dest[0]);
}
