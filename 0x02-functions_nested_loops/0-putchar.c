#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *c = "main";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');

	return (0);
}
