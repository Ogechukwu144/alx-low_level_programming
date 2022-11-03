#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * Firstly, we need to check the length of the string
 * @s: String
 * Return: length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}


/**
 * checkPalindrome - checks each character of the string for palindrome
 * @s: string to be checked
 * @i: iterator
 * @len: length of string
 * Return: 1 if palindrome, 0 if not.
 */
int checkPalindrome(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (checkPalindrome(s, i + 1, len - 1));
}


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if palindrome, 0 if otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checkPalindrome(s, 0, _strlen_recursion(s)));
}
