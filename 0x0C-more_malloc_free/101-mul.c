#include <stdlib.h>
int _putchar(char c);
/**
 * printerror - prints Error
 * Description: prints Error
 */
void printerror(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
}

/**
 * isonlydigit - checks if a string contains only digits
 * @s: string to be checked
 * Description: checks if a string contains only digit
 * Return: 1 if string contains only didgit
 *         0 if string has at lest one non-digit character
 */
int isonlydigit(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}


/**
 * main - multiplies two digits
 * @argc: 1st digit in the multiplication
 * @argv: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printerror();
		_putchar('\n');
		exit(98);
	}

	if (!isonlydigit(argv[1]) || !isonlydigit(argv[2]))
	{
		printerror();
		_putchar('\n');
		exit(98);
	}

	return (0);
}
