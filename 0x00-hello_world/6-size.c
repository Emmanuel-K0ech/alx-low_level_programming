#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: uses the sizeof() to determine type size
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int k;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(k));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
