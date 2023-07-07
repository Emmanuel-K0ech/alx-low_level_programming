#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - Entry point
 * @argc: argument count/number of arguments passed in terminal
 * @argv: argument vector/ string of the arguments passed in terminal
 *
 * Description: prints the name of the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);

	printf("%s\n", argv[0]);
	return (0);
}
