#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: multiplication of 2 numbers
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	unsigned long int i, j;
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < 2; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
