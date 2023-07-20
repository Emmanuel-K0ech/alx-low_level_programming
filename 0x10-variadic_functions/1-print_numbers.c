#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers passed to it as arguments
 * @separator: string printed between numbers
 * @n: number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(list, int));
			break;
		}
		if (separator != NULL)
			printf("%d%c ", va_arg(list, int), *separator);
		else
			printf("%d ", va_arg(list, int));
	}
	printf("\n");
	va_end(list);
}
