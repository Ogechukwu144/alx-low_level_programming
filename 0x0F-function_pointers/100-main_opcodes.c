#include "function_pointers.h"
#include <stdio.h>

/**
 * main - program that prints the opcodes of its own main function.
 * Usage: ./main number_of_bytes
 * @argc: number of command line arguments
 * @argv: An array of size argc
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index, nbytes;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < nbytes; index++)
	{
		printf("%02x", ptr[index] & 0xFF);
		if (index != nbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
