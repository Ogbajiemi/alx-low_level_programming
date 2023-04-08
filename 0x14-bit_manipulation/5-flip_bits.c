#include "main.h"

/**
 * flip_bits - return the number bit needed to flip
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int pack = 0;
	unsigned long int k = n ^ m;

	while (k != 0)
	{
		pack += k & 1;
		k >>= 1;
	}

	return (pack);

}
