#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 * @size: Size of the hash table
 *
 * Description: Function that creates a hash table
 * Return: A hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = NULL;

	if (size == 0)
		return (NULL);
	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);
	h_table->size = size;
	h_table->array = calloc(size, sizeof(hash_node_t *));
	if (!h_table->array)
	{
		free(h_table);
		return (NULL);
	}
	return (h_table);
}
