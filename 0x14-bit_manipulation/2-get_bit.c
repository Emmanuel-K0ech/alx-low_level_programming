#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @n: long int
 * @index: bit position to fetch
 *
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	n = n >> index;
	bit = n & 1;
	return (bit);
}
