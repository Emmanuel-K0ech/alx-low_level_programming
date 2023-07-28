#include <stddef.h>
#include "lists.h"
/**
 * list_len - counts the number of elements in a list
 * @h: pointer to the list
 *
 * Return: number of elements of size_t
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
