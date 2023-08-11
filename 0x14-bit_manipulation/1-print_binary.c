#include <stdio.h>
/**
 * print_binary - prints the binary equivalent of a number
 * @n: unsigned int
 *
 */
void print_binary(unsigned long int n)
{
	unsigned int bitmask = 1 << 31;
	unsigned int i;

	for (i = 1; i <= 32; i++)
	{
		printf("%c", n & bitmask ? '1' : '0');
		n = n << 1;
	}
	printf("\n");
}
