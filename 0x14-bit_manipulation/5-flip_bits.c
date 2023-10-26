#include "main.h"
/**
 * flip_bits - returns the number of bit to be flipped to change num1 to num2
 * @n: number to change from
 * @m: number to change to
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = 0;
	unsigned int count = 0;

	result = (n ^ m);
	while (result > 0)
	{
		if ((result & 1) > 0)
			count++;
		result = result >> 1;
	}
	return (count);
}
