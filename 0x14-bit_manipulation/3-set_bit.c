#include "main.h"
/**
 * set_bit - sets bit at a certan index to 1
 * @n: unsigned int
 * @index: position of bit to set
 *
 * Return: 1 if it worked and -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit_mask = 1 << index;
	int result = 0;

	result = (*n | bit_mask);
	*n = result;
	return (1);
}
