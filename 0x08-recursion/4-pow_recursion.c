#include "main.h"
/**
 * _pow_recursion - calculates x ** y
 * @x: base of the calculation
 * @y: power of the operation
 *
 * Return: x ** y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
