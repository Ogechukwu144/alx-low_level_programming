#include <stdio.h>

/**
 * main - print all letters except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char at;

	for (at = 'a'; at <= 'z'; at++)
		if (at != 'q' && at != 'e')
			putchar(at);
	putchar('\n');
	return (0);
}
