#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: unsigned long int
 * @index: bit position to change
 *
 * Return: 1 if it worked and -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;
	unsigned long int bit_mask = 1 << index;

	if (index > 63)
		return (-1);
	num = *n & ~bit_mask;
	*n = num;
	return (1);
}
