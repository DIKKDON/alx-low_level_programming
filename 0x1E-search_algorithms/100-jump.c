#include "search_algos.h"
#include "math.h"
/**
 * jump_search - search for value in sorted array using jum
 * sort algorithm
 * @array: pointer to first element of array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of wher value is found, or -1 if value not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size), left = 0, right = jump;
	int i;

	if (array == NULL)
		return (-1);
	while (right < (int)size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		left = right;
		right = right + jump;
	}
	printf("Value checked array[%d] = [%d]\n", left, array[left]);
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	for (i = left; i <= right && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

