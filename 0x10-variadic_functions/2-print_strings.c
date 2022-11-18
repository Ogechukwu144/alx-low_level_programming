#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;
	char *str;

	va_start(ap, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(ap, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (j < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
