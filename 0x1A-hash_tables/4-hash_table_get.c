#include "hash_tables.h"

/**
 * hash_table_get - get value in hash table
 * @ht: hash table
 * @key: key
 *
 * Return: value at key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node_get;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node_get = ht->array[index];

	if (node_get == NULL)
		return (NULL);
	if (node_get->next == NULL)
		return (node_get->value);

	if (node_get->next)
	{
		hash_node_t *temp = node_get;

		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				return (temp->value);
			}
			temp = temp->next;
		}
	}

	return (NULL);
}
