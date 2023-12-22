#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *temp_free;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			temp_free = temp;
			temp = temp->next;
			free(temp_free->key);
			free(temp_free->value);
			free(temp_free);
		}
	}
	free(ht->array);
	free(ht);
}
