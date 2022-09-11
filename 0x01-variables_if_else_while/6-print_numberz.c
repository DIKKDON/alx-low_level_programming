#include <stdio.h>

/**
 *main - program execution starts here
 *Description: this is the main function
 *Return: an integer to signify success or fail
 */
int main(void)
{
	int ascii_num = 48;

	while (ascii_num <= 57)
	{
		putchar(ascii_num);
		ascii_num++;

	}

	putchar('\n');

	return (0);
}
