#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: prints the number of arguments passed into the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);

	printf("%d\n", argc - 1);
	return (0);
}
