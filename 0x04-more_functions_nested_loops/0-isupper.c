#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: integer passed to the function
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (0);
	}
}
