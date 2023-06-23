#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: the number passed as an argument
 *
 * Return: i (value of the last digit)
 */
int print_last_digit(int i)
{
	int lastdigit;

	lastdigit = _abs(i) % 10;
	return (lastdigit);
}
