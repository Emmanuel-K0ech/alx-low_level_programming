#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: prints a string without using printf or put
 *
 * Return: Returns 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, str);

	return (0);
}
