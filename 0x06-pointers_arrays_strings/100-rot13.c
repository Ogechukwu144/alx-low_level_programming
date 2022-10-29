#include "main.h"

/**
 *  rot13 - encodes a string using rot13
 *  @s: string
 *
 *  Return: char pointer to string
 */

char *rot13(char *s)
{
	int l, f;
	char numA[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char numB[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (l = 0; s[l] != '\0'; l++)
	{
		for (f = 0; numA[f] != '\0'; f++)
		{
			if (s[l] == numA[f])
			{
				s[l] = numB[f];
				break;
			}
		}
	}
	return (s);
}
