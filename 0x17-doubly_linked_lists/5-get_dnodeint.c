#include "lists.h"
/**
 * get_dnodeint_at_index - gets nodes at requested index
 * @head: head of the list
 * @index: index of node to return
 *
 * Return: node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
