#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct node - structure with two members
 * @str: member 1 of type string
 * @len: member 2
 * @next: member 3
 *
 * Description: stucture of a list
 */
typedef struct node
{
	char *str;
	int len;
	struct node *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* _LISTS_H_ */
