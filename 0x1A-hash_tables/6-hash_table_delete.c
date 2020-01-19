#include "hash_tables.h"
/**
 * hash_table_delete - Function deletes a hash table
 * @ht: Hash table
 *
 * Description: Function deletes a hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i = 0;
	hash_node_t *node, *tmp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}