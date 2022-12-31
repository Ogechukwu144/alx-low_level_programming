#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: 0 if b is NULL or b contains chars in the string
 *	that is not 0 or 1.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int con_val = 0;

	if (!b) /* if b is NULL */
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1') /* || inclusive OR operator */
			return (0);
		con_val = 2 * con_val + (b[i] - '0');
	}
	return (con_val);
}
