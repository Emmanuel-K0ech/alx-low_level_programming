#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of array of linked lists
 *
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arry;

	arry = malloc(sizeof(hash_table_t *) * size);
	if (arry == NULL)
		return (NULL);
	return (arry);
}
