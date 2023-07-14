#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates memory blocks
 * @ptr: pointer to previous allocated block
 * @old_size: size of previous allocated block
 * @new_size: size of new allocated block
 *
 * Return: pointer on success and NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			free(new_ptr);
			return (NULL);
		}
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(new_ptr);
		return (NULL);
	}
	memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}
