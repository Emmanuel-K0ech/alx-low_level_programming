#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: pointer to string
 *
 */
void print_rev(char *s)
{
	char *ptr;

	ptr = s;

	while (*ptr != '\0')
	{
		ptr++;
	}

	ptr--;

	while (ptr >= s)
	{
		_putchar(*ptr);
		ptr--;
	}
	_putchar('\n');
}
