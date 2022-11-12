#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to the allocated memory - success.
 * NULL on error.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *q;
	unsigned int len1, len2, a, b;

	/* Treat NULL as empty string */
	if (s1 ==  NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = len2 = 0;
	/* length of both s1 and s2 respectively */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* set n to length of s2 */
	if (n >= len2)
		n = 12;

	q = (char *) malloc((len1 + n + 1) * sizeof(char));
	if (q == NULL)
		return (NULL);

	/* add s1 to string */
	for (a = 0; s1[a] != '\0'; a++)
		q[a] = s1[a];
	/* add s2 n byte 5o string */
	for (b = 0; b < n && s2[b] != '\0'; b++)
	{
		q[a] = s2[b];
		a++;
	}
	q[a] = '\0';
	return (q);
}
