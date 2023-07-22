#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - peforms addition
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - peforms subtraction
 * @a: first int
 * @b: second int
 * Return: integer result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - peforms multiplication
 * @a: first int
 * @b: second int
 * Return: integer result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - peforms division
 * @a: first int
 * @b: second int
 * Return: integer result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - peforms modulo operation (remainder)
 * @a: first int
 * @b: second int
 * Return: integer result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
