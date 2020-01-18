#include "hash_tables.h"
/**
 * key_index - Function that gives you the index of a key
 * @key: Key of the hash table
 * @size: Size of the array of the hash table
 *
 * Description: Function that gives you the index of a key
 * Return: The key if it succeeded, 0 otherwise
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size)
		return (hash_djb2(key) % size);
	return (0);
}
