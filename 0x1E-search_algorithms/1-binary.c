#include "search_algos.h"

void print_search_arr(int left, int right, int *arr);
/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index or found, -1 if not found or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		print_search_arr(left, right, array);
		middle = (right + left) / 2;
		if (value > array[middle])
			left = middle + 1;
		else if (value < array[middle])
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}

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
