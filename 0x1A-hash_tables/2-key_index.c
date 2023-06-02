#include "hash_tables.h"

/**
 * key_index - Gets index of given key
 * @key: Given key
 * @size: size of hash table array
 *
 * Return: index of given key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
