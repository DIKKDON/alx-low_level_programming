#include "search_algos.h"

/**
 * linear_skip - implements linear skip search
 * @list: pointer to start of list
 * @value: value being searched for
 *
 * Return: pointer to node containing value otherwise NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *next = list, *current = list;

	if (list == NULL)
		return (NULL);
	do {
		current = next;
		next = next->express;
		if (next != NULL)
			printf("Value checked at index [%ld] = [%d]\n", next->index, next->n);
	} while (next->express && next->n < value);
	if (next->express == NULL)
	{
		current = next;
		while (next->next)
			next = next->next;
	}
	if (current && next)
		printf("Value found between indexes [%ld] and [%ld]\n",
			   current->index, next->index);
	while (current != next->next && current != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}

