#include "3-calc.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0 (Success)
 */
int main(int argc, char **argv)
{
	int result, num1, num2 = 0;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = op(num1, num2);
	printf("%d\n", result);
	return (0);
}
