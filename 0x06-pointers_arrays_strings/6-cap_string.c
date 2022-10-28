#include "main.h"

/**
 * cap_string - capitalizes every first letter of a word in a string
 * separators of words:  space, tabulation, new line, and
 * @c: String
 *
 * Return: pointer to c
 */

char *cap_string(char *c)
{
	int k;
	char l;

	k = 0;
	l '\0';

	while (c[k])
	{
		if (k > 0)
		{
			l = c[k - 1];
		}
		if (c[k] >= 'a' && c[k] <= 'z')
		{
			if (l == '\n' || l == ' ' || l == ',' || l == '!')
			{
				c[k] = c[k] - 32;
			}
			else if  (l == ';' || l == '\t' || l == '{' || l == '}')
			{
				c[k] = c[k] - 32;
			}
			else if (l == ')' || l == '(' || l == '.' || k == 0)
			{
				c[k] = c[k] - 32;
			}
		}

		k++;
	}
	return (&p[0]);
}
