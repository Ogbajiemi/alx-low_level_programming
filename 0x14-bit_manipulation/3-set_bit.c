#include "main.h"

/**
 * set_bit - this function set the value of a bit to 1 at a given index
 * @n: the number to be changed with a pointer
 * @index: index of bit to set
 *
 *
 * Return: 1 if it worked and -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(*n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}

	return (-1);
}
