#include "3-calc.h"

/**
 * op_add - adds to intigers
 * @a: st int
 * @b: nd int
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - diff between two ints
 * @a: st int
 * @b: nd int
 *
 * Return: diff a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * * @a: st int
 * @b: nd int
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: st int
 * @b: nd int
 *
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the modulos
 * @a: st integer
 * @b: nd integer
 *
 * Return: modulos a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
