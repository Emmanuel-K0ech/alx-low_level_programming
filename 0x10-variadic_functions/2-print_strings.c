#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prnts strings
 * @separator: string printed between string arguments
 * @n: number of strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n -1))
			printf("%s", va_arg(list, char*));
		else
			printf("%s%s", va_arg(list, char*), separator);
	}
	printf("\n");
	va_end(list);
}
