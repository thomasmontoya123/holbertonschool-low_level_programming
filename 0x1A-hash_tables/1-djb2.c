#include "hash_tables.h"

/**
 * hash_djb2 - function implementing the djb2 algorithm.
 * @str: str
 * Return: 1 in success case, 0 if it fails
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
