#include "main.h"

/**
 * flip_bits - give the number of bits to change
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: amount of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63;
	int count = 0;
	unsigned long int c;
	unsigned long int e;

	while (i >= 0)
	{
		e = n ^ m;
		c = e >> i;
		if (c & 1)
		{
			count++;
		}
		i--;
	}
	return (count);
}
