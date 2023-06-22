#include "main.h"
/**
 * print_diagonal - prints diagonal on screen
 * @n: number of times diagonal will be printed
 *
 */
void print_diagonal(int n)
{
	for (n = n; n > 0; n--)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar('\');
		}
	}
	_putchar('\n');
}
