#include "main.h"
/**
 * puts_half - prints half the string passed to it
 * @str: pointer of string to be halfed
 *
 */
void puts_half(char *str)
{
	int i, stp;

	i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	str--;

	if (i / 2 == 0)
	{
		stp = i / 2;
		str = str - stp;

		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
	else
	{
		stp = (i - 1) / 2;
		str = str - stp;

		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
}
