#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of an unsigned int
 * @n: unsigned int to be changed to binary
 *
 */
void print_binary(unsigned long int n)
{
	char src_str[65];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	while (n > 0)
	{
		src_str[i] = (n & 1) + '0';
		n = n >> 1;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(src_str[i]);
	}
}
