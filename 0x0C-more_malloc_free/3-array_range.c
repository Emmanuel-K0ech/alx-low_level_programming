#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value of array
 * @max: maximum value of array
 *
 * Description: array contains min to max values (min and max included)
 *
 * Return: pointer to new array of NULL on failure
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size = 0;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
