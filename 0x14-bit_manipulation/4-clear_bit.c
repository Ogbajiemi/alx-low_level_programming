#include "main.h"

/**
 * clear_bit - setting the value of a bit to 0 at a given index
 * @n: number to set
 * @index: index of the bit to set
 *
 * Return: 1 if it work and -1 if it doesn't
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int v, p;

	if (n == 0 && index > 63)
	{
		return (-1);
	}
	v = (1UL << index);
	p = ~v;

	*n = p & *n;

	return (1);

}
