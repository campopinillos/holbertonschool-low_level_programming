#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table
 * @ht: Hash table
 *
 * Description: Function that prints a hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i = 0, flag = 0;
	hash_node_t *node;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next, flag = 1;
		}
	}
	printf("}\n");
}
