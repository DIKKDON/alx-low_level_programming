#include "hash_tables.h"

/**
 * hash_table_set - insert value
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 for success, 0 for failue
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	const unsigned char *strkey = (const unsigned char *)key;

	if (strcmp(key, "") == 0 || ht == NULL)
		return (0);
	index = key_index(strkey, ht->size);
	node = ht->array[index];

	if (node == NULL)
	{
		node = create_node(key, value, NULL);
		ht->array[index] = node;
		return (1);
	}
	else
	{
		if (strcmp(node->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
		}
		else
		{
			hash_node_t *head = node;
			hash_node_t *new_node = create_node(key, value, head);

			head = new_node;
			ht->array[index] = new_node;
		}
		return (1);
	}
}

/**
 * create_node - create a node
 * @value: value at node
 * @key: key of node
 * @next: next pointer
 *
 * Return: new node
 */
hash_node_t *create_node(const char *key, const char *value, hash_node_t *next)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = next;
	return (new_node);
}
