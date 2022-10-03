#include <stdlib.h>
/**
 * _str_len - finds length of a string
 * @str: string to find its length
 * Description: finds length of a string (not including null character)
 * Return: length of string
 */
int _str_len(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * str_concat - multiplies two digits
 * @s1: 1st digit in the multiplication
 * @s2: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *mem;

	/*find length of s1 and s2*/
	i = _str_len(s1);
	j = _str_len(s2);
	mem = (char *)malloc(i + j + 1);
	if (mem == NULL)
		return (NULL);
	/*copy strings from s1 to mem*/
	for (i = 0; s1[i] != '\0'; i++)
		mem[i] = s1[i];
	/*copy srings from s2 to mem*/
	for (j = 0; s2[j] != '\0'; j++, i++)
		mem[i] = s2[j];
	mem[i] = '\0';
	return (mem);
}
