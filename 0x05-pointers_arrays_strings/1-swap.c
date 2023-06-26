#include "main.h"
/**
 * swap_int - interchange the value of two varables using pointers
 * @a: first address
 * @b: second address
 *
 */
void swap_int(int *a, int *b)
{
	int num1, num2;

	num1 = *a;
	num2 = *b;
	*a = num2;
	*b = num1;
}
