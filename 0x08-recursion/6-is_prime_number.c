#include "main.h"

int primeNumber(int n, int itr);

/**
 * is_prime_number - tells if the input integer is a prime number
 * @n: input number
 *
 * Return: 1 if n is a prime number, 0 if otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primeNumber(n, n - 1));
}

/**
 * primeNumber - calculates for a prime number recursively
 * @n: input number
 * @itr: iterator
 *
 * Return: 1 if n is prime, 0 if otherwise
 */

int primeNumber(int n, int itr)
{
	if (itr == 1)
		return (1);
	if (n % itr == 0 && itr > 0)
		return (0);
	return (primeNumber(n, itr - 1));
}
