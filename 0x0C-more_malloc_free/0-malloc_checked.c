#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate in memory
 *
 * Descripton: uses exit() when malloc returns NULL
 *
 * Return: pointer on success and NULL on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
