#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure, pointer to the new string on success.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, len;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	s3 = malloc(sizeof(char) * (a + b + 1));

	if (s3 == NULL)
		free(s3);
	return (NULL);

	for (c = 0; c < a; c++)
		s3[c] = s1[c];

	len = b;
	for (b = 0; b <= len; c++, b++)
		s3[c] = s2[b];

	return (s3);
}
