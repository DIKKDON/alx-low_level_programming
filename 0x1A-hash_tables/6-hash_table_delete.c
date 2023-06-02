#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i = 0;

	if (ht == NULL)
		return;

	size = ht->size;

	for (i = 0; i < size; i++)
	{
		hash_node_t *temp = ht->array[i];
		hash_node_t *next = ht->array[i];

		while (temp != NULL)
		{
			free(temp->key);
			free(temp->value);
			temp = temp->next;
			free(next);
			next = temp;
		}
	}
	free(ht->array);
	free(ht);
}
