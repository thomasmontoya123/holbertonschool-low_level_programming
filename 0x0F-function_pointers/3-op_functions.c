#include "3-calc.h"
/**
 * op_add - adds
 * @a: number for add
 * @b: number for add
 *
 * Return: result
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

/**
 * op_sub - difference of a and b
 * @a: number
 * @b: number
 *
 * Return: result
 */

int op_sub(int a, int b)
{
	int sub;

	sub = a - b;

	return (sub);

}

/**
 * op_mul - multiplicate
 * @a: number
 * @b: number
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	int mul;

	mul = a * b;

	return (mul);

}

/**
 * op_div - division
 * @a: number
 * @b: number
 *
 * Return: div
 */

int op_div(int a, int b)
{
	int div;

	div = a / b;

	return (div);

}


/**
 * op_mod - remainder of division
 * @a: number
 * @b: number
 *
 * Return: remain
 */

int op_mod(int a, int b)
{
	int remain;

	remain = a % b;

	return (remain);

}
