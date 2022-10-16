#include <stdio.h>

/**
 * main - print alphabets in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char at;

	for (at = 'a'; at <= 'z'; at++)

		putchar(at);

	putchar('\n');

	return (0);
}
