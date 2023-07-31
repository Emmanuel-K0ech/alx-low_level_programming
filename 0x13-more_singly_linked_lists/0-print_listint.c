#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - prints all the elements of listint_t
 * @h: pointer to the node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
