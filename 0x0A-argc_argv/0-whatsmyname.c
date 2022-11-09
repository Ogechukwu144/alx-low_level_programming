#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name
 * @argc: number of command line arguments
 * @argv: an array of size argc
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
