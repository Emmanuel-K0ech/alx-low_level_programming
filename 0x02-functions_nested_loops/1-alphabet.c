#include <stdio.h>
#include "main.h"
void print_alphabet(void);
/**
 * main - Entry point
 *
 * Description: prints the alphabet(in lower case) using a function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints a to z
 *
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a < 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
