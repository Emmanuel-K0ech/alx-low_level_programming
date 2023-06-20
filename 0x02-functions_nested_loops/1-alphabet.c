#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints a to z using for loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints a to z in lowercaser
 *
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a < 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
