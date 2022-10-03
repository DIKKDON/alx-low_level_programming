#include <stdlib.h>
/**
 * _strdup - multiplies two digits
 * @str: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *_strdup(char *str)
{
	int i;
	char *mem;

	if (str == NULL)
		return (NULL);
	/*find length of str*/
	for (i = 0; str[i] != '\0'; i++)
		;

	mem = (char *) malloc(i + 1);
	if (mem == NULL)
		return (NULL);

	/*copy str to mem*/
	for (; i >= 0; --i)
	{
		mem[i] = str[i];
	}
	return (mem);
}
