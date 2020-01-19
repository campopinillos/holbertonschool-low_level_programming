#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: Hash table you want to add or update the key/value to
 * @key: Key of the hash table
 * @value: Value associated with the key
 *
 * Description: Function that adds an element to the hash table
 * In case of collision, add the new node at the beginning of the list
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *node = NULL;

	if (!ht || !key || !*key || !value || !strdup(value))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; ++i)
	{
		if (!strcmp(ht->array[i]->key, key))
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
