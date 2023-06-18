#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print 0 to 9 'a' to 'f'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char lcase;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	for (lcase = 'a'; lcase < 'g'; lcase++)
	{
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}
