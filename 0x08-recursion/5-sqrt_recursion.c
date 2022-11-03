#include "main.h"

int natural_sqrt_recursion(int n, int itr);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number in question
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the square root
 * @itr: iterator
 *
 * Return: the resulting square root
 */

int natural_sqrt_recursion(int n, int itr)
{
	if (itr * itr > n)
		return (-1);
	if (itr * itr == n)
		return (itr);
	return (natural_sqrt_recursion(n, itr + 1));
}
