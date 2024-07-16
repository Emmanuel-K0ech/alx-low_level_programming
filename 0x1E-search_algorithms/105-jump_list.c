#include "search_algos.h"
#include <math.h>
/**
 * jump_list - searches for a value in a sorted list
 * of integers using the Jump search algorithm
 * @list: input list
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, x, y;
	listint_t *prevs;

	if (list == NULL || size == 0)
		return (NULL);

	y = (size_t)sqrt((double)size);
	index = 0;
	x = 0;

	do {
		prevs = list;
		x++;
		index = x * y;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prevs->index, (int)list->index);

	for (; prevs && prevs->index <= list->index; prevs = prevs->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prevs->index, prevs->n);
		if (prevs->n == value)
			return (prevs);
	}

	return (NULL);
}
