#include <stdio.h>
/**
 * times_table - prints the times table from 0 to 9
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%2d, ", i * j);
		}
		printf("\n");
	}
}
