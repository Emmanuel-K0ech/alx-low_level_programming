#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 0 to 9 in ascending order separated by a ,
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar(numbers + '0');

		if (numbers != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
