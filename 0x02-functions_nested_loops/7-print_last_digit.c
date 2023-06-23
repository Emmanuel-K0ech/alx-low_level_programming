#include <stdio.h>
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

	if (i < 0)
		i *= -1;
	else
		i *= 1;

	lastdigit = i % 10;
	printf("%d", lastdigit);
	return (lastdigit);
}
