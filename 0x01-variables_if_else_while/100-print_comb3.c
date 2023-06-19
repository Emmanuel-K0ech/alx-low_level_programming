#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: nested for loops to print possible pairs of single digits
 * combinations should not be the same and must be producing a lesser
 * digit in value 01 rather than 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a > b || a == b)
			{
				continue;
			}
			else
			{
				putchar(a + '0');
				putchar(b + '0');

				if (a == 8 && b == 9)
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
