#include "main.h"

/**
 * rot13 - multiplies two digits
 * @str: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = str[i] + 13;

		if (str[i] > 'z')
			str[i] = str[((str[i] - 'z') + 'a') - 1];
		i++;
	}
	return (str);
}
