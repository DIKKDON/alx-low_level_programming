i#include <stdlib.h>
/**
 * print_name - calls a callback function that prints a name
 * @name: the name to be printed
 * @f: the callback function
 * Description: calls a callback function that prints a name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
