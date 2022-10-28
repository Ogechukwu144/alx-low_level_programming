#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase.
 * @u: Pointer to string
 *
 * Return: Pointer to uppercase string
 */

char *string_toupper(char *u)
{
	int j = 0;

	while (u[j] != '\0')
	{
		if (u[j] >= 'a' && u[j] <= 'z')
		{
			u[j] = u[j] - 32;
		}

		j++;
	}
	return (u);
}
