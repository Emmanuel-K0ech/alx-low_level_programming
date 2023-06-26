#include "main.h"
/**
 * puts2 - prints the value of even indexes
 * @str: ponter to a string
 *
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
