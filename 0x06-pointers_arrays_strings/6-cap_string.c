#include "main.h"

/**
 * cap_string - capitalizes every first letter of a word in a string
 * separators of words:  space, tabulation, new line, and
 * @strg: String
 *
 * Return: pointer to string
 */

char *cap_string(char *strg)
{
	int j = 0;

	while (strg[j])
	{
		while (!(strg[j] >= 'a' && strg[j] <= 'z'))
			j++;
		{
		if (strg[j - 1] == ' ' ||
			strg[j - 1] == '\t' ||
			strg[j - 1] == '\n' || 
			strg[j - 1] == ',' ||
			strg[j - 1] == ';' ||
			strg[j - 1] == '.' ||
			strg[j - 1] == '!' ||
			strg[j - 1] == '?' ||
			strg[j - 1] == '"' ||
			strg[j - 1] == '(' ||
			strg[j - 1] == ')' ||
			strg[j - 1] == '{' ||
			strg[j - 1] == '}' || j == 0)
			
				strg[j] -= 32;
		}
		j++;
	}

	return (strg);
}

