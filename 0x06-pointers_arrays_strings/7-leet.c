#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: char pointer
 */

char *leet(char *s)
{
	int str, leet;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	str = 0;
	while (s[str] != '\0')
	{
		leet = 0;
		while (leet < 10)
		{
			if (let[leet] == s[str])
			{
				s[str] = num[leet];
			}
			leet++;
		}
		str++;
	}
	return (s);
}
