#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: First Integer
 * @s2: Second integer
 *
 * Return: The difference in the 2 integers
 */

int _strcmp(char *s1, char *s2)
{
	int j, cmpNum;

	j = 0;

	while (s1[j] == s2[j] && s1[j] != '\0')
	{
		j++;
	}

	cmpNum = s1[j] - s2[j];

	return (cmpNum);
}
