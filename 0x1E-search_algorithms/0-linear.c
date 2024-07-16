#include "search_algos.h"
/**
* linear_search - searches for a value in an array of integers
* using Linear search algorithm
* @array: input array
* @size: size of array
* @value: value to search for
* Return: 0 on success and -1 otherwise
*/
int linear_search(int *array, size_t size, int value)
{
	int x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < (int)size; x++)
	{
		printf("Value checked array[%u] = [%d]\n", x, array[x]);
		if (value == array[x])
			return (x);
	}
	return (-1);
}
