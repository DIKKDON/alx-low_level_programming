#include "main.h"
#include <math.h>



/**
 * _pow_recursion - multiplies two digits
 * @x: 1st digit in the multiplication
 * @y: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int _pow_recursion(int x, unsigned int y)
{
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 *	-there is one or more chars in the string b that is not 0 or 1
 *	-b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length, i;
	unsigned int value = 0;

	if (b == NULL || *b == '\0')
		return (0);

	length = 0;
	while (b[length] != '\0')
	{
		if (b[length] < '0' || b[length] > '1')
			return (0);
		length++;
	}

	for (i = 0; length > 0; length--, i++)
	{
		value += (b[length - 1] - '0') * _pow_recursion(2, i);
	}

	return (value);
}
