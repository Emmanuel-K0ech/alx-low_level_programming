#include "main.h"
/**
 * prime - find prime number
 * @i: integer
 * @j: number to check
 *
 * Return: return 1 if input is prime else 0
 */
int prime(int i, int j)
{
	if (j != 1)
	{
		if (i == j)
			return (1);
		else if (j % i == 0 || j <= 1)
			return (0);
		else
			return (prime(i + 1, j));
	}
	return (0);
}
/**
 * is_prime_number - shows if number is prime
 * @n: number to check
 *
 * Return: the input integer if its a prime number
 */
int is_prime_number(int n)
{
	int x = 2;

	return (prime(x, n));
}
