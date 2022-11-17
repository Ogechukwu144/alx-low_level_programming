#include "variadic_functions.h"

/**
 * sum_them_all - Adds all its parameters
 * @n: number of arguments
 *
 * Return: The sum of the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /* ap argument parameter */
	unsigned int j, sum = 0;

	/* initialise the argument list from the start */
	va_start(ap, n);

	if (n == 0)
		return (0);
	/* Go through the argument list */
	for (j = 0; j < n; j++)
		/* sum each number amd add that to the sum */
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
