#include "main.h"

/**
 * infinite_add - add two integers
 * @n1: 1st number to add
 * @n2: 2nd number to add
 * @r: result
 * @size_r: size of r
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, t = 0, q = 0, l = 0, p = 0, n;

	while (n1[i])
	{
		i++;
	}
	while (n2[t])
	{
		t++;
	}
	i--, t--;
	size_r = i >= t ? i + 2 : t + 2;
	r[size_r] = '\0', size_r--, n = n - size_r;
	while (size_r > 0)
	{
		if (i >= 0 && t >= 0)
		{
			if ((p == 0 && (n1[i] != '0' || n2[t] != '0')) || p > 0)
			{
				q = ((((n1[i] - 48) + (n2[t] - 48)) + l) % 10) + '0';
			}

			l = (((n1[i] - 48) + (n2[t] - 48) + l) / 10);
		} else if (i >= 0)
		{
			q = (n1[i] + l - 48) % 10 + '0', l = (n1[i] + l - 48) / 10;
		} else if (t >= 0)
		{
			q = (n2[t] + l - 48) % 10 + '0', l = (n2[t] + l - 48) / 10;
		} else
		{
			break;
		}
		r[size_r] = q, i--, t--, size_r--, p = 1;
	}
	r[size_r] = l + '0';
	return (n <= 1 ? 0 : &r[0]);
}
