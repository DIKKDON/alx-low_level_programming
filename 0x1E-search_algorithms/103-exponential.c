#include "search_algos.h"

/**
 * print_search_array - print the searched array
 * @left: start index
 * @right: end index
 * @arr: array to print from
 */
void print_search_array(int left, int right, int *arr)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[right]);
}

/**
 * binary_search_recurse - do binary search recursively
 * @array: array to search in
 * @left: start index
 * @right: end index
 * @value: value to search for
 *
 * Return: index of value if found, otherwise -1
 */
int binary_search_recurse(int *array, int left, int right, int value)
{
	int middle;

	if (array == NULL)
		return (-1);
	if (right >= left)
	{
		print_search_array(left, right, array);
		middle = (left + right) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			return (binary_search_recurse(array, left, middle - 1, value));
		if (array[middle] < value)
			return (binary_search_recurse(array, middle + 1, right, value));
	}
	return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of found element, -1 if array is null or element is not found
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 0;
	int end = 0;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		printf("Value found between indexes [0] and [0]\n");
		printf("Searching in array: %d\n", array[0]);
		return (0);
	}
	for (i = 1; array[i] <= value && i < (int)size; i = i * 2)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	if (i >= (int)size)
		end = (int)size - 1;
	else
		end = i;
	printf("Value found between indexes [%d] and [%d]\n", i / 2, end);
	return (binary_search_recurse(array, i / 2, end, value));
}
