#include "hash_tables.h"

/**
 * hash_table_print - print contents of hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	int size, i, first_hit;

	if (ht == NULL)
		return;
	size = ht->size, i = 0, first_hit = 0;
	printf("{");
	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != NULL)
		{
			const char *key = ht->array[i]->key;
			const char *value = ht->array[i]->value;

			if (ht->array[i]->next == NULL)
			{
				if (first_hit == 1)
					printf(", '%s': '%s'", key, value);
				else
					printf("'%s': '%s'", key, value);
			}
			else
			{
				hash_node_t *temp = ht->array[i];

				while (temp != NULL)
				{
					if (first_hit == 1)
						printf(", '%s': '%s'", temp->key, temp->value);
					else
						printf("'%s': '%s'", temp->key, temp->value);
					first_hit = 1;
					temp = temp->next;
				}
			}
			first_hit = 1;
		}
	}
	printf("}\n");
}
