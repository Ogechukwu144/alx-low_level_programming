#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int j = 0;
	int l;
	char ca;

	while (s[j] != '\0')
	{
		j++;
	}

	for (l = 0; l < j; l++)
	{
		j--;
		ca = s[l];
		s[l] = s[j];
		s[j] = ca;
	}
}
