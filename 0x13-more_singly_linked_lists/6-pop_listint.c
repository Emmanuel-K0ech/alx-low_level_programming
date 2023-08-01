#include "lists.h"
#include <stdlib.h>
/**
 * pop_list - deletes head node
 * @head: pointer to reference
 *
 * Return: value of node or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int result = 0;

	if (*head == NULL)
		return (0);
	temp = *head;
	result = temp->n;
	*head = temp->next;
	free(temp);
	return (result);
}
