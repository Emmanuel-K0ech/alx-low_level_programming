#include "search_algos.h"
/**
* recursive_search - searches for a value in an array using
* Binary search algorithm
* @array: nput array
* @size: size of array
* @value: value to search for
* Return: index of the number
*/
int recursive_search(int *array, size_t size, int value)
{
	size_t half_size = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half_size && size % 2 == 0)
		half_size--;

	if (value == array[half_size])
		return ((int)half_size);

	if (value < array[half_size])
		return (recursive_search(array, half_size, value));

	half_size++;

	return (recursive_search(array + half_size, size - half_size, value)
	+ half_size);
}

/**
* binary_search - returns index of the number being searched for
* @array: input array
* @size: size of the array
* @value: value to search for
* Return: index of the number
*/
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);
	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
