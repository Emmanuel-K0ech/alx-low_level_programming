#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print a to z except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		if (lcase == 'q' || lcase == 'e')
			continue;
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}
