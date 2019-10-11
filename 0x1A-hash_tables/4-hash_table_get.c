#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table you want to add or update the key/value to
 * @key: key of new element
 * Return: value in success case, NULL if not key founded
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	hash_node_t *temporal = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
		temporal = ht->array[index];

	while (temporal)
	{
		if (strcmp(key, temporal->key) == 0)
			return (temporal->value);

		temporal = temporal->next;
	}
	return (NULL);
}
