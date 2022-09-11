#include <stdio.h>

/**
 *main - program execution starts here
 *Description: this is the main function
 *Return: an integer to signify success or failure
 */
int main(void)
{
	int base_16 = '0';

	while (base_16 <= '9')
	{
		putchar(base_16);
		base_16++;
	}

	base_16 = 'a';
	while (base_16 <= 'f')
	{
		putchar(base_16);
		base_16++;
	}

	putchar('\n');

	return (0);
}
