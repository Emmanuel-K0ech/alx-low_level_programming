#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at given index
 * @h: head of node
 * @idx: index to insert it at starting from 0
 * @n: data for new inserted node
 *
 * Return: inserted node of NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp = *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (count == idx)
		{
			new_node->n = n;
			new_node->next = temp;
			new_node->prev = temp->prev;
			(temp->prev)->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
