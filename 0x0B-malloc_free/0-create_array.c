#include "main.h"
#include <stdlib.h>
/**
 * create_array - declares array size using malloc
 * @size: size of the array
 * @c: character used to initialize array
 *
 * Return: NULL if size == 0, pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
