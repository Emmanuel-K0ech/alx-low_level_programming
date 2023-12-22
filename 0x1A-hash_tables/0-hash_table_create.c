#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of array of linked lists
 *
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_array;

	new_array = malloc(sizeof(hash_node_t *) * size);
	if (new_array == NULL)
		exit(EXIT_FAILURE);
	new_array->size = size;
	return (new_array);
}
