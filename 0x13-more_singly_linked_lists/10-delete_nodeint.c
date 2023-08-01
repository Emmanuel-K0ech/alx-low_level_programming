#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: pointer to node pointer
 * @index: reference to node index to be deleted
 *
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *idx_before, *idx_after;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (i == index)
			break;
		idx_before = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	idx_after = temp->next;
	idx_before->next = idx_after;
	free(temp);
	return (1);
}
