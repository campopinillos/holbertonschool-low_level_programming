#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with a key
 * @ht: Hash table you want to add or update the key/value to
 * @key: Key of the hash table
 *
 * Description: Function that retrieves a value associated with a key
 * Return: Value associated with the element, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (!ht || !key || !*key)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
