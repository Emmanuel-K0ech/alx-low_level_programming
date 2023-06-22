#include "main.h"
/**
 * print_line - prints line a number of times
 * @n: number of times line is printed
 *
 */
void print_line(int n)
{
	do 
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
		_putchar('_');
		}
		n--;
	}
	while (n > 0);
}
