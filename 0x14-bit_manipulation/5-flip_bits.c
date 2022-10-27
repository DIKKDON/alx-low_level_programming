/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: the number to test
 * @m: he next number
 * Return:  returns the number of bits you would
 * need to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, flips = 0;

	n = n ^ m;

	/*
	 * long is 8 bytes (64 bits) and can be indexed 0-63
	 */
	for (i = 0; i < 64; i++)
	{
		if (n & 1)
			flips++;
		n = n >> 1;
	}
	return (flips);
}
