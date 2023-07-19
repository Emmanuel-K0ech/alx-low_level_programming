#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array passed with elements
 * @size: size of the array
 * @cmp: function pointer used to compare the values of the array
 *
 * Return: -1 if no match and or first element with a match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
