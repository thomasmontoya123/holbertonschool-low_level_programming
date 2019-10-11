#include "hash_tables.h"

/**
 * hash_table_print - retrieves a value associated with a key.
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, print_counter = 0;
	hash_node_t *temporal = NULL;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;

		for (temporal = ht->array[i]; temporal; temporal = temporal->next)
		{
			if (print_counter > 0)
				printf(", ");
			printf("'%s': '%s'", temporal->key, temporal->value);
			print_counter++;
		}
	}
	printf("}\n");
}
