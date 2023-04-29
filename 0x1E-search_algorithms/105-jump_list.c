#include "search_algos.h"
#include <math.h>

/**
 * jump_list - jump list in a singly linked list
 * @list: pointer to start of list
 * @size: number of nodes in the list
 * @value: value to be searched for
 *
 * Return: index of value found, otherwise NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t block_index = 0, num_blocks_passed = 0, block_size = 0;
	listint_t *prev = list;

	if (list == NULL || size == 0)
		return (NULL);
	block_size = sqrt((double)size);
	do {
		prev = list;
		num_blocks_passed++;
		block_index = block_size * num_blocks_passed;
		while (list->next && list->index < block_index)
			list = list->next;
		printf("Value checked at index [%d] = [%d]\n", (int)block_index, list->n);
	} while (block_index < size && list->n < value && list->next);
	printf("Value found between indexes [%d] and [%d]\n",
			(int)prev->index, (int)list->index);
	while (prev && prev->index <= list->index)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}

