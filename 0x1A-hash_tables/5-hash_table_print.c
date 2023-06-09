#include "hash_tables.h"

/**
 *  hash_table_print - print hash table.
 * @ht: pointer to hash table to print
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, f = 0;
	unsigned int ht_size;
	hash_node_t *temp_node;

	if (!ht)
		return;
	printf("{");
	ht_size = ht->size;
	for (i = 0; i < ht_size; i++)
	{
		if (ht->array[i])
		{
			temp_node = ht->array[i];
			while (temp_node)
			{
				if (!f)
				{
					printf("\'%s\': \'%s\'", temp_node->key, temp_node->value);
					f = 1;
				}
				else
					printf(", \'%s\': \'%s\'", temp_node->key, temp_node->value);
				temp_node = temp_node->next;
			}
		}
	}
	printf("}\n");
}
