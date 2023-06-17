#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 *
 * Description: if else statements
 *
 * Return value: 0 on success
 */
int main(void)
{
	/* multiple if else statments */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	char string[];
	char lastdigit;
	int length;

	sprintf(string, "%d", n);

	length = strlen(string);
	lastdigit = string[length - 1];

	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
	}


	return (0);
}
