#include "main.h"

/**
 * set_bit - setting the value of a bit to 1 at a given index
 * @n: value of bit
 * @index: index of bit to set
 *
 * Return: 1 if it work and -1 if it doesn't.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int v;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	v = (1UL << index);

	*n |= v;

		return (1);

}
