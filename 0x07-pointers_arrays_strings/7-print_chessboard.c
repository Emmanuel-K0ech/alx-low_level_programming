#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints a chessboard on the screen
 * @a: passed an 8 * 8 array containing the board format
 *
 */
void print_chessboard(char (*a)[8])
{
	int rows, columns;

	for (rows = 0; rows < 8; rows++)
	{
		for (columns = 0; columns < 8; columns++)
		{
			printf("%c", a[rows][columns]);
		}
		printf("\n");
	}
}
