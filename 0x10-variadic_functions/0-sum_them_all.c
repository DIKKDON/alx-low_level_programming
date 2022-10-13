#include <stdarg.h>

/**
 * sum_them_all - prints the opcode of the main fn
 * @n: the name to be printed
 * @...: the callback function
 * Description: prints the opcode of the main fn
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
