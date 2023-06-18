#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing z-a, reverse order alphabes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lcase;

	for (lcase = 'z'; lcase >= 'a'; lcase--)
	{
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}
