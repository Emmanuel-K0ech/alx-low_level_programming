#include "main.h"
/**
 * sqroot - find natural sqrt of a number
 * @i: integer
 * @j: integer
 *
 * Return: integer
 */
int sqroot(int i, int j)
{
	if (i * i == j)
		return (i);
	else if (i * i > j)
		return (-1);
	else
		return (sqroot(i + 1, j));
}
/**
 * _sqrt_recursion - find natural sqrt of a number
 * @n: int
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (sqroot(i, n));
}
