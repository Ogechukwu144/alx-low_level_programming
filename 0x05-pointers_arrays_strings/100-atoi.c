#include "main.h"

/**
 * _atol - convert a string to an integer
 * @s: string parameter
 *
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int i = 0, size = 0, io = 0, np = 1, m = 1, poll;

	while (*(s + i) != '\0')
	{
		if (size > 0 && (*(s + i) < '0' || *(s + i) > '9'))
			break;

		if (*(s + i) == '-')
			np *= -1;

		if ((*(s + i) >= '0') && (*(s + i) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		i++;
	}

	for (poll = i - size; poll < i; poll++)
	{
		io = io + ((*(s + poll) - 48) * m);
		m /= 10;
	}
	return (io * np);
}
