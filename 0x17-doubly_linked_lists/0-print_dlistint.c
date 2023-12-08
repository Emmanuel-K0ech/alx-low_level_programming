#include "lists.h"
/**
 * print_dlistint - print doubly linked list
 * @h: head to list
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp_head = h;

	while (temp_head != NULL)
	{
		printf("%d\n", temp_head->n);
		temp_head = temp_head->next;
		count++;
	}
	return (count);
}
