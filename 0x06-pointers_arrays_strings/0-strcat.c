

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0') /* find end of dest */
		i++;
	while ((dest[i++] = src[j++]) != '\0') /* copy src */
		;
}
