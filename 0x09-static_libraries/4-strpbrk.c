#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: pointer to string searched in s
 * Return: pointer to the bytes in s, null if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return (s + a);
			b++;
		}
		a++;
	}
	return ('\0');
}
