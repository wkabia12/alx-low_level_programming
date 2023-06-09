#include "hash_tables.h"

/**
 * hash_table_create - returns pointer to newly created hash table
 * @size: size of array
 * Return: hash table pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht_ptr;

	ht_ptr = malloc(sizeof(hash_table_t));
	if (!ht_ptr)
	{
		free(ht_ptr);
		return (NULL);
	}

	ht_ptr->size = size;
	ht_ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht_ptr->array)
	{
		free(ht_ptr->array);
		return (NULL);
	}

	return (ht_ptr);
}
