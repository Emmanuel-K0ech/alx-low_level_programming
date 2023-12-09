#include "lists.h"
/**
 * sum_dlistint - sum of n of the whole list
 * @head: head of the list
 *
 * Return: sum on success and 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
