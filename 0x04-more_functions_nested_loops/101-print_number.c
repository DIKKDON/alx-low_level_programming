#include <stdlib.h>
#include "main.h"

/**
 * print_number - prints any number it's give it in ASCII
 * @n: number to be printed
 * Description: converts a number and prints
 * each digit of the number in ASCII format, no
 * matter how large the number is
 */
void print_number(int n)
{
	int isnegative = 0, temp;
	unsigned int sigfig = 0;
	int i, j;

	if (n < 0)
	{
		isnegative = 1;
		n = abs(n);
	}
	temp = n;
	while (temp)
	{
		temp = temp / 10;
		sigfig++;
	}
	sigfig--;

	j = sigfig;

	sigfig = 1;
	for (i = 1; i <= j; i++)
	{
		sigfig = sigfig * 10;
	}

	if (isnegative)
		_putchar('-');
	temp = n;
	while (sigfig)
	{
		_putchar(temp / sigfig + '0');
		temp = temp % sigfig;
		sigfig = sigfig / 10;
	}
}
