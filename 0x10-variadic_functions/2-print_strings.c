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
	char *current_string;

	if (separator == NULL)
		separator = "";

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			current_string = va_arg(list, char*);
			if (current_string  == NULL)
			{
				printf("(nil)");
				break;
			}
			else
			{
				printf("%s", current_string);
				break;
			}
		}
		else
		{
			current_string = va_arg(list, char*);
			if (current_string == NULL)
				printf("(nil)");
			else
				printf("%s%s", current_string, separator);
		}
	}
	printf("\n");
	va_end(list);
}
