#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: String
 * @accept: string with characters to match in s
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int count = 0;
	char *s1, *s2;

	s1 = s;
	s2 = accept;

	a = 0;
	while (s1[a] != '\0')
	{
		b = 0;
		while (s2[b] != '\0')
		{
			if (s2[b] == s1[a])
			{
				count++;
				break;
			}

			b++;
		}
		if (s[a] != accept[b])
		{
			break;
		}

		a++;
	}
	return (count);
}
