#include "main.h"

/**
 * array_range - multiplies two digits
 * @min: 1st digit in the multiplication
 * @max: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int *array_range(int min, int max)
{
	int range, i;
	int *ptr;

	if (min > max)
		return (NULL);
	range = max - min;
	ptr = malloc(sizeof(int) * (range + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (range + 1); i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
