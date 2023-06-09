#include "hash_tables.h"

/**
 * hash_table_delete - print hash table.
 * @ht: pointer to hash table to print
 * Return: void and prints hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *temp_node, *aux_node;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp_node = ht->array[i];
		while (temp_node)
		{
			aux_node = temp_node->next;
			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);
			temp_node = aux_node;
		}
	}

	free(ht->array);
	free(ht);
}
