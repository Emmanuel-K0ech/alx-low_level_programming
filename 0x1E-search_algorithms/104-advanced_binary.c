#include "search_algos.h"
/**
 * rec_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half_size = size / 2;
	size_t x;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (x = 0; x < size; x++)
		printf("%s %d", (x == 0) ? ":" : ",", array[x]);

	printf("\n");

	if (half_size && size % 2 == 0)
		half_size--;

	if (value == array[half_size])
	{
		if (half_size > 0)
			return (rec_search(array, half_size + 1, value));
		return ((int)half_size);
	}

	if (value < array[half_size])
		return (rec_search(array, half_size + 1, value));

	half_size++;
	return (rec_search(array + half_size, size - half_size, value) + half_size);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
