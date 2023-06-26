#include <stdio.h>
/**
 * print_array - prints n elements of array
 * @a: pointer to integer array
 * @n: number of elements of array to be printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *a);
		a++;
	}
	printf("\n");
}

