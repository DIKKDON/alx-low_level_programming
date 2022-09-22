
/**
 * _strcat - multiplies two digits
 * @src: 1st digit in the multiplication
 * @dest: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0') /* find end of dest */
		i++;
	while ((dest[i++] = src[j++]) != '\0') /* copy src */
		;
	return (dest);
}
