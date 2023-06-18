#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 *
 * Description: if else statements
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char word[20];
	char lastdigit;
	int length;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	sprintf(word, "%d", n);

	length = strlen(word);
	lastdigit = word[length - 1];

	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}


	return (0);
}
