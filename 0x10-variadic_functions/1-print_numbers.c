#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints the opcode of the main fn
 * @separator: the name to be printed
 * @n: the callback function
 * @...: the callback function
 * Description: prints the opcode of the main fn
 * Return: integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}
