#include "main.h"
/**
 * print_line - prints line a number of times
 * @n: number of times line is printed
 *
 */
void print_line(int n)
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
			_putchar('_');
		}
		_putchar('\n');
