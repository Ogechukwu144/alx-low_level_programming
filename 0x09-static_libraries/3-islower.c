#include "main.h"

/**
 * _islower - check for lowercase character
 * @c:the character to cheack
 *
 * Return: 1 if letter is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
