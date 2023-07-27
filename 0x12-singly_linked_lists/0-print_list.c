#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t
 * @h: pointer to a list
 *
 * Return: size_t number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
