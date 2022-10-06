#include <stdlib.h>

/**
 * malloc_checked - multiplies two digits
 * @b: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (ptr);
}
