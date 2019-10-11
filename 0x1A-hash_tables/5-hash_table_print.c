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
		if (print_counter > 0)
			printf(", ");

		for (temporal = ht->array[i]; temporal; temporal = temporal->next)
		{
			printf("'%s': '%s'", temporal->key, temporal->value);
			if (temporal->next)
				printf(" ,");
			print_counter++;
		}
	}
	printf("}\n");
}
