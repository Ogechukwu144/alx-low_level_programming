#include "variadic_functions.h"
#include <stdbool.h>

/**
 * print_all - Function that prints anything
 * @format: the format to print a value
 *
 * Return: No return
 */

void print_all(const char * const format, ...)
{
	va_list pal; /* representing print all */
	char *string;
	int i = 0;

	va_start(pal, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(pal, int));
				break;
			case 'f':
				printf("%f", va_arg(pal, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(pal, int));
				break;
			case 's':
				string = va_arg(pal, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(pal);
}
