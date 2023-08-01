#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything to the standard output
 * @format: a list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(list, int));
				break;
			case 'i':
				printf("%d, ", va_arg(list, int));
				break;
			case 'f':
				printf("%f, ", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
