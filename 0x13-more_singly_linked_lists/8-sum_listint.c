#include "lists.h"
/**
 * sum_listint - does the sum of int n in the list
 * @head: pointer to head node
 *
 * Return: int sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
