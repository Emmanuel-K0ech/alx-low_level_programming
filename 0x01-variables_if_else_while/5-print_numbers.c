#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints numbers 0 to 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 10; numbers++)
	{
		printf("%d", numbers);
	}
	printf("\n");
	return (0);
}
