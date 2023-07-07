#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry pont
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: multipies two integer command line arguments passed during
 * compilation
 *
 * Return: 0 on success 1 on Error
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
