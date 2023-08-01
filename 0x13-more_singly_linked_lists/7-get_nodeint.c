#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - gets the node at a given index
 * @head: pointer to head node
 * @index: node index to return
 *
 * Return: address of index-th node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
