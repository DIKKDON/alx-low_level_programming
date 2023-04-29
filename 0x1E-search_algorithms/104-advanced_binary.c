#include "search_algos.h"

/**
 * print_search_arr - print the searched array
 * @left: start index
 * @right: end index
 * @arr: array to print from
 */
void print_search_arr(int left, int right, int *arr)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[right]);
}

/**
 * binary_search_recurse - recursive binary search
 * @array: array to search
 * @left: start index
 * @right: end index
 * @value: value to search for
 *
 * Return: Index found at otherwise -1;
 */
int binary_search_recurse(int *array, int left, int right, int value)
{
	if (array == NULL)
		return (-1);
	if (left <= right)
	{
		int middle = (left + right) / 2;

		print_search_arr(left, right, array);
		if (array[middle] == value)
		{
			int result = binary_search_recurse(array, left, middle - 1, value);

			if (result == -1)
				return (middle);
			return (result);
		}
		else if (array[middle] < value)
			return (binary_search_recurse(array, middle + 1, right, value));
		else
			return (binary_search_recurse(array, left, middle - 1, value));
	}
	return (-1);
}

/**
 * advanced_binary - binary search that finds first index of value
 * @array: array to search in
 * @size: number of elements in array
 * @value: value of array
 *
 * Return: index of found value otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int left = 0, right = size - 1;

	return (binary_search_recurse(array, left, right, value));
}
