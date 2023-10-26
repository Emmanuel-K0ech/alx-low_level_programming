#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of an unsigned int
 * @n: unsigned int to be changed to binary
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
