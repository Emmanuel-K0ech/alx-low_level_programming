#include "lists.h"
/**
 * dlistint_len - count number of elements in list
 * @h: const pointer
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp_head = h;

	while (temp_head != NULL)
	{
		temp_head = temp_head->next;
		count++;
	}
	return (count);
}
