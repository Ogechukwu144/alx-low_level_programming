#include "main.h"

/**
 * _strstr -  a function that locates a substring
 * @haystack: main string in question
 * @needle: searched in a haystack
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
		while (*b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack++;
	}
	return ('\0');
}
