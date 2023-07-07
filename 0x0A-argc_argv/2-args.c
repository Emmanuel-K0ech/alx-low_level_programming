#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: prints all arguments the program receives
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
