#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a linke d list and sets head to NULL
 * @head: pointer to  node pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *counter;

	counter = *head;
	while (counter != NULL)
	{
		temp = counter;
		counter = counter->next;
		free(temp);
	}
	*head = NULL;
}
