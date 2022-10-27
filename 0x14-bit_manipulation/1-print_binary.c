#include "main.h"

void print_binary_helper(unsigned long int n, int ishead);

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	print_binary_helper(n, 1);
}


/**
 * print_binary_helper - prints the binary representation of a number
 * @n: the number
 * @ishead: specifies if this is the first call of the recursive fn
 */
void print_binary_helper(unsigned long int n, int ishead)
{
	if (n == 0 && ishead)
		_putchar('0');
	if (n == 0)
		return;

	print_binary_helper(n >> 1, 0);
	_putchar((n & 1) + '0');

}
