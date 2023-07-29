#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees the memory allocated to a list
 * @head: pointer to the memory to be freed
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
