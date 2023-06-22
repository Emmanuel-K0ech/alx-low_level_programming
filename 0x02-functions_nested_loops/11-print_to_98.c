#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all numbers from n to 98
 * @n: argument passed to function
 *
 */
void print_to_98(int n)
{
	for (n = n; n  <= 98; n++)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
	}
	putchar('\n');
}
