#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert node at a given index
 * @head: pointer to a node pointer
 * @idx: index to insert new_node
 * @n: integer data for new node
 *
 * Return: address to new_node or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp, *idx_before, *idx_after;
	unsigned int i = 0;

	temp = *head;
	while (temp != NULL)
	{
		if (i == idx)
			break;
		idx_before = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	idx_after = temp;
	new_node->n = n;
	new_node->next = idx_after;
	idx_before->next = new_node;
	return (new_node);
}
