

/**
 * _strncat - multiplies two digits
 * @dest: 1st digit in the multiplication
 * @src: 2nd digit to be multiplied
 * @n: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0') /* find end of dest */
		i++;
	while ((dest[i++] = src[j++]) != '\0' && j !=  n) /* copy src */
		;
	return (dest);
}
