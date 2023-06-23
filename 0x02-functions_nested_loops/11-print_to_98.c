#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all numbers from n to 98
 * @n: argument passed to function
 *
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
		printf("\n");
	}
	else
	{
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
		printf("\n");
	}
}
