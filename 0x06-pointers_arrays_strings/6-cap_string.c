#include "main.h"

/**
 * cap_string - capitalises all words of a string
 * @str: string
 *
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	int p = 0, j;

	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((str[p] > 97 && (str[p]) <= 122))
		str[p] = str[p] - 32;
	p++;
	while (str[p] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (str[p] == separators[j])
			{
				if ((str[p + 1] >= 'a') && (str[p + 1] <= 122))
					str[p + 1] + str[p + 1] - 32;
				break;
			}
		}
		p++;
	}
	return (str);
}
