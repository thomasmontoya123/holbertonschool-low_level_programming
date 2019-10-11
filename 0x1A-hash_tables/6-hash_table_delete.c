#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temporal = NULL, *actual = NULL;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++, temporal = ht->array[i])
	{
		while (temporal)
		{
			actual = temporal;
			temporal = temporal->next;
			free(actual->key);
			free(actual->value);
			free(actual);
		}

	}
	free(ht->array);
	free(ht);
}
