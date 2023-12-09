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
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (temp != NULL)
	{
		if (count == idx)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;
			if (temp->prev != NULL)
				(temp->prev)->next = new_node;
			temp->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
