#include "function_pointers.h"
/**
 * array_iterator - executes a function give as a parameter on eache element
 * of an aray
 * @array: to execute function on
 * @size: size of array
 * @action: pointer to fuction
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
