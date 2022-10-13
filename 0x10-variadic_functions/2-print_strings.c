#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings- prints the opcode of the main fn
 * @separator: the name to be printed
 * @n: the callback function
 * @...: the callback function
 * Description: prints the opcode of the main fn
 * Return: integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');


}
