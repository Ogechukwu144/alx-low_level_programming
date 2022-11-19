#include "3-calc.h"

/**
 * op_add - adds a and b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gets the difference of a and b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - gets the product of a and b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: result of the division a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of a by b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: the remainder of the division a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
