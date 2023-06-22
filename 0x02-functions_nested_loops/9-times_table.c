#include "main.h"
/**
 * times_table - prints the times table from 0 to 9
 *
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(0 * i);
		_putchar(',');
		_putchar(' ');
		_putchar(1 * i);
		_putchar(',');
		_putchar(' ');
		_putchar(2 * i);
		_putchar(',');
		_putchar(' ');
		_putchar(3 * i);
		_putchar(',');
		_putchar(' ');
		_putchar(4 * i);
		_putchar(',');
		_putchar(' ');
		_putchar(5 * i);
		_putchar(',');
		_putchar(' ');
		_putchar(6 * i);
		_putchar(',');
		_putchar(' ');
		_putchar(7 * i);
		_putchar(',');
		_putchar(' ');
		_putchar(8 * i);
		_putchar(',');
		_putchar(' ');
		_putchar(9 * i);
	}
}
