#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to first occurrence of the character c, null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
}
